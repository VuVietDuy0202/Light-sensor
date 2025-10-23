#include <Arduino.h>

#define LightSensorPin 5

void setup() {
  Serial.begin(115200);
  analogReadResolution(12); // nếu là ESP32-S3
}

void loop() {
  int lightLevel = analogRead(LightSensorPin);
  float voltage = lightLevel * 3.3 / 4095.0;

  // Gửi dữ liệu Teleplot đúng định dạng
  Serial.println(">lightLevel:" + String(lightLevel));
  Serial.println(">voltage:" + String(voltage, 2));  // 2 chữ số sau dấu phẩy

  delay(100);
}
