#include "MyJoystick.h"

MyJoystick::MyJoystick(uint8_t pinVRX, uint8_t pinVRY, uint8_t pinSW,
                      uint16_t lowThreshold, uint16_t highThreshold,
                      uint16_t deadzone) :
  _pinVRX(pinVRX),
  _pinVRY(pinVRY),
  _pinSW(pinSW),
  _lowThreshold(lowThreshold),
  _highThreshold(highThreshold),
  _deadzone(deadzone),
  _x(0),
  _y(0),
  _currentDir(NEUTRAL),
  _prevDir(NEUTRAL),
  _pressStartTime(0),
  _holdTriggered(false) {}

void MyJoystick::begin() {
  pinMode(_pinSW, INPUT_PULLUP);
}

MyJoystick::Direction MyJoystick::read() {
  _prevDir = _currentDir;
  
  _x = analogRead(_pinVRX);
  _y = analogRead(_pinVRY);

  // Определение состояния кнопки
  if(digitalRead(_pinSW) == LOW) {
    if(_currentDir != PRESSED) {
      _pressStartTime = millis();
      _holdTriggered = false;
    }
    _currentDir = PRESSED;
  } else {
    // Определение направления движения
    if(_x < _lowThreshold - _deadzone) {
      _currentDir = LEFT;
    } else if(_x > _highThreshold + _deadzone) {
      _currentDir = RIGHT;
    } else if(_y < _lowThreshold - _deadzone) {
      _currentDir = UP;
    } else if(_y > _highThreshold + _deadzone) {
      _currentDir = DOWN;
    } else {
      _currentDir = NEUTRAL;
    }
    _holdTriggered = false;
  }
  
  return _currentDir;
}

bool MyJoystick::isPressed(Direction dir) { //если держится на положении или нажата кнопка
  return (_currentDir == dir) && (_prevDir != dir);
}

bool MyJoystick::isReleased(Direction dir) {//отпушенна кнопка
  return (_prevDir == dir) && (_currentDir != dir);
}

bool MyJoystick::isHeld(Direction dir) {// если держится кнопка в течении 3 сек
  return (_currentDir == dir) && (_prevDir == dir);
}

bool MyJoystick::isHold(Direction dir, uint16_t holdTime) {
  if(dir != PRESSED) return false;
  
  if(_currentDir == PRESSED && !_holdTriggered) {
    if(millis() - _pressStartTime >= holdTime) {
      _holdTriggered = true;
      return true;
    }
  }
  return false;
}

void MyJoystick::setThresholds(uint16_t low, uint16_t high) {
  _lowThreshold = low;
  _highThreshold = high;
}

void MyJoystick::setDeadzone(uint16_t dz) {
  _deadzone = dz;
}