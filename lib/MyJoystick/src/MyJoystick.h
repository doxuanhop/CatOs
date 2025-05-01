#ifndef MY_JOYSTICK_H
#define MY_JOYSTICK_H

#include <Arduino.h>

class MyJoystick {
  public:
    enum Direction {
      NEUTRAL,
      LEFT,
      RIGHT,
      UP,
      DOWN,
      PRESSED
    };

    MyJoystick(uint8_t pinVRX, uint8_t pinVRY, uint8_t pinSW, 
              uint16_t lowThreshold = 1000, uint16_t highThreshold = 3000,
              uint16_t deadzone = 200);
    
    void begin();
    Direction read();
    
    int getX() { return _x; }
    int getY() { return _y; }
    
    bool isPressed(Direction dir);
    bool isReleased(Direction dir);
    bool isHeld(Direction dir);
    bool isHold(Direction dir, uint16_t holdTime = 2000);

    void setThresholds(uint16_t low, uint16_t high);
    void setDeadzone(uint16_t dz);

  private:
    uint8_t _pinVRX;
    uint8_t _pinVRY;
    uint8_t _pinSW;
    uint16_t _lowThreshold;
    uint16_t _highThreshold;
    uint16_t _deadzone;
    
    int _x;
    int _y;
    Direction _currentDir;
    Direction _prevDir;
    
    unsigned long _pressStartTime;
    bool _holdTriggered;
};

#endif