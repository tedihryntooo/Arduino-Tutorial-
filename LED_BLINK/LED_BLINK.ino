
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // Nyalakan LED
  delay(1000);                      // Tunggu 1 detik
  digitalWrite(LED_BUILTIN, LOW);   // Matikan LED
  delay(1000);                      // Tunggu 1 detik
}
