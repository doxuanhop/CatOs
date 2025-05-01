#include <Arduino.h>
#include <MyJoystick.h>

MyJoystick joy(34, 35, 13); // Пины VRX, VRY, SW

void setup() {
  Serial.begin(115200);
  joy.begin();
}

void loop() {
  joy.read(); // Обязательно вызывать в каждом цикле
  
  if(joy.isHold(MyJoystick::PRESSED)) {
    Serial.println("Кнопка удержана 2 секунды!");
  }
  
  Serial.print("X: ");
  Serial.print(joy.getX());
  Serial.print(" | Y: ");
  Serial.println(joy.getY());

  if(joy.isPressed(MyJoystick::UP)) {
    Serial.println("UP pressed!");
  }
  
  if(joy.isHeld(MyJoystick::UP)) {
    Serial.println("UP held");
    // Здесь можно добавить действие для постоянного удержания
  }
  
  if(joy.isReleased(MyJoystick::UP)) {
    Serial.println("UP released!");
  }
  
  // Аналогично для других направлений и кнопки
  if(joy.isPressed(MyJoystick::PRESSED)) {
    Serial.println("Button pressed!");
  }

  delay(50);
}