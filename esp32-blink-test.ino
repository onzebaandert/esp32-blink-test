void setup() {
  Serial.begin(115200);
  delay(1000);
  Serial.println("ESP32 start weer");
}

void loop() {
  Serial.println("Hallo vanaf ESP32");
  delay(2000);
}
