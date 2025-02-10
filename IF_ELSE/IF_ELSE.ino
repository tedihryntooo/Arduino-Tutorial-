int ledPin = 13; // Menentukan pin LED
int potPin = A0; // Pin analog untuk potensiometer

void setup() {
  pinMode(ledPin, OUTPUT); // Set pin LED sebagai OUTPUT
  Serial.begin(9600); // Inisialisasi serial monitor
}

void loop() {
  int potValue = analogRead(potPin); // Membaca nilai dari potensiometer (0 - 1023)

  // Menentukan durasi LED menyala berdasarkan nilai potensiometer
  int delayTime;
  String durationText;

  if (potValue >= 0 && potValue <= 204) {
    delayTime = 1000; // 1 detik
    durationText = "1 detik";
  } 
  else if (potValue >= 205 && potValue <= 409) {
    delayTime = 2000; // 2 detik
    durationText = "2 detik";
  } 
  else if (potValue >= 410 && potValue <= 614) {
    delayTime = 3000; // 3 detik
    durationText = "3 detik";
  } 
  else if (potValue >= 615 && potValue <= 819) {
    delayTime = 4000; // 4 detik
    durationText = "4 detik";
  } 
  else if (potValue >= 820 && potValue <= 1023) {
    delayTime = 5000; // 5 detik
    durationText = "5 detik";
  }

  // Menampilkan nilai potensiometer dan durasi di Serial Monitor
  Serial.print("Nilai Potensiometer: ");
  Serial.print(potValue);
  Serial.print(" -> Durasi: ");
  Serial.println(durationText);

  // Menyalakan LED
  digitalWrite(ledPin, HIGH);
  delay(delayTime); // Menunggu sesuai dengan durasi yang ditentukan
  digitalWrite(ledPin, LOW); // Mematikan LED
  delay(1000); // LED mati selama setengah detik sebelum mulai lagi
}
