# CatOS – Firmware cho máy chơi game cầm tay
| *> CatOS <* | [CatOS Lite](https://github.com/CatDevCode/CatOs_Lite/) |
| --- | --- |

![LOGO](assets/logo.jpg)

Firmware dành cho máy chơi game cầm tay dựa trên ESP32 với màn hình OLED. Bao gồm nhiều trò chơi, tiện ích và công cụ hệ thống.

## Tính năng nổi bật
- 🕹️ Trò chơi: Tetris, Rắn săn mồi, Flappy Bird, Arduino Dino, Pong, Arkanoid
- ⚙️ Cài đặt hệ thống qua giao diện web
- 📶 Hỗ trợ WiFi (chế độ STA và AP)
- 📖 Trình quản lý tệp cho hệ thống tệp LittleFS
- 🛠️ Menu dịch vụ với chức năng hiệu chỉnh (calibration)
- 🧮 Máy tính cầm tay tích hợp
- ⏱️ Đồng hồ bấm giờ và hẹn giờ

## Linh kiện sử dụng
- Vi điều khiển ESP32
- Màn hình OLED 128x64 (SPI, 7 chân)
- 5 nút điều khiển
- Pin lithium-ion

## [CÓ THỂ NẠP FIRMWARE ESP32 TẠI TRANG NÀY](https://catdevcode.github.io/CatOs_webflasher/)

## Dễ dàng cho dự án DIY
### 1. Sơ đồ kết nối
![Sơ đồ kết nối](https://github.com/CatDevCode/CatOs/blob/main/assets/sheme_catos.png)

### 2. Sơ đồ cấp nguồn
![Sơ đồ nguồn](https://github.com/CatDevCode/CatOs/blob/main/assets/bat.png)

> 💡 **MẸO:** Sử dụng điện trở 100 kΩ

## PCB
- Dự án trên [EasyEDA](https://oshwlab.com/oleggator2013/catos_catdevcode)

![PCB1](assets/pcb1.jpg)  
![PCB2](assets/pcb2.jpg)  
![PCB3](assets/pcb_with_components.jpg)

## Tạo và tải hình ảnh
1. Mở công cụ [imageProcessor.exe](https://github.com/AlexGyver/imageProcessor) (yêu cầu cài đặt Java)

![IMG1](assets/img1.png)

2. Mở hình ảnh bạn muốn chuyển đổi  
![IMG2](assets/img2.png)

3. Điều chỉnh kích thước và ngưỡng ảnh để có kết quả tốt nhất  
![IMG3](assets/img3.png)

4. Đảo màu (trắng là màu hiển thị trên màn hình) và đảm bảo chiều cao & rộng giống hình  
![IMG4](assets/img4.png)

5. Nhấn **SAVE**, tệp `.h` sẽ xuất hiện trong thư mục `image-processor`. Bạn có thể đổi tên nếu cần.  
![IMG5](assets/img5.png)

## Thư viện sử dụng
- [GyverOLED](https://github.com/GyverLibs/GyverOLED/)
- [GyverButton (cũ nhưng hoạt động tốt)](https://github.com/GyverLibs/GyverButton)
- [GyverTimer (cũ nhưng để tương thích)](https://github.com/GyverLibs/GyverTimer)
- [Settings](https://github.com/GyverLibs/Settings)
- [Random16](https://github.com/GyverLibs/Random16)

> 📌 **Ghi chú:** Tất cả các thư viện đều từ Gyver
