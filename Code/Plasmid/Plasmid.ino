void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Status Blinky
  delay(1000);
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);
  digitalWrite(LED_BUILTIN, LOW);
}
