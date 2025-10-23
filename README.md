# 🌤️ Light Sensor Monitor using ESP32 & Teleplot

## 📘 Giới thiệu

Dự án này sử dụng **ESP32** để đọc giá trị ánh sáng từ cảm biến quang (Light Sensor) và gửi dữ liệu qua **Serial** cho **Teleplot** – một công cụ mạnh mẽ giúp hiển thị dữ liệu cảm biến theo thời gian thực dưới dạng đồ thị.

Mục tiêu:
- Đọc giá trị ADC từ cảm biến ánh sáng.
- Chuyển đổi ra điện áp tương ứng.
- Hiển thị đồ thị biến thiên cường độ ánh sáng theo thời gian bằng **Teleplot** trong **Visual Studio Code** hoặc trình duyệt [teleplot.fr](https://teleplot.fr).

---

## ⚙️ Phần cứng & Phần mềm

**Phần cứng:**
- ESP32 hoặc ESP32-S3
- Cảm biến ánh sáng (LDR + điện trở phân áp)
- Dây nối chân tín hiệu GPIO 5
- Hình ảnh kết nối phần cứng
  <img width="720" height="1280" alt="image" src="https://github.com/user-attachments/assets/36a50d74-4c9f-4da3-a9de-e86b98e2dd2c" />

**Phần mềm:**
- PlatformIO (trên VS Code)
- Teleplot extension hoặc website [teleplot.fr](https://teleplot.fr)
<img width="1648" height="786" alt="image" src="https://github.com/user-attachments/assets/f03e2af8-69a2-402b-ae99-5c5390958edf" />

---

## 💡 Cách hoạt động

ESP32 đọc giá trị ADC tại chân cảm biến, sau đó gửi dữ liệu sang máy tính qua Serial với định dạng:
