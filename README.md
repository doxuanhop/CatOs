# CatOS Прошивка игровой консоли

<img src="assets/logo.jpg" width="400" height="350" alt="LogoPCB">

Прошивка для портативной игровой консоли на базе ESP32 с OLED-дисплеем. Включает набор игр, утилит и системных инструментов.

## Особенности
- 🕹️ Игры: Тетрис, Змейка, Flappy Bird, Ардуино дино, Понг
- ⚙️ Системные настройки через веб-интерфейс
- 📶 Поддержка WiFi (STA и AP режимы)
- 📖 Файловый менеджер для LittleFS
- 🛠️ Сервисное меню с калибровкой
- 🧮 Встроенный калькулятор
- ⏱️ Секундомер и таймер

## Компоненты
- Микроконтроллер ESP32
- OLED дисплей 128x64 (SPI, 7 pins)
- 5 кнопок управления
- Литий-ионный аккумулятор

## PCB
- Сыллка на проект [Easy Eda](https://oshwlab.com/oleggator2013/catos_catdevcode)
<img src="assets/pcb1.jpg" width="600" height="350" alt="LogoPCB">
<img src="assets/pcb2.jpg" width="600" height="350" alt="LogoPCB">
<img src="assets/pcb_with_components.jpg" width="600" height="600" alt="LogoPCB">


## Библиотеки
- [GyverOled](https://github.com/GyverLibs/GyverOLED/)
- [GyverButton(Старое, но работает отлично)](https://github.com/GyverLibs/GyverButton)
- [GyverTimer(Старое, но для совместимости)](https://github.com/GyverLibs/GyverTimer)
- [Settings](https://github.com/GyverLibs/Settings)
- [Random16](https://github.com/GyverLibs/Random16)
- PS. Все библиотеки от гайвера

## Установка
1. Установите [PlatformIO](https://platformio.org/)
2. Клонируйте репозиторий:
```bash
git clone https://github.com/CatDevCode/CatOs.git
```
3. Сбилдите проект
```bash
pio run
```
4. Загрузите проект на ESP32
```bash
pio run --target upload 
```
