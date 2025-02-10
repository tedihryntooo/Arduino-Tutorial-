
#define RED_LIGHT 13
#define YELLOW_LIGHT 12
#define GREEN_LIGHT 11

void setup() {
  pinMode(RED_LIGHT, OUTPUT);
  pinMode(YELLOW_LIGHT, OUTPUT);
  pinMode(GREEN_LIGHT, OUTPUT);
}

void loop() {
  // Lampu hijau menyala (jalan)
  digitalWrite(GREEN_LIGHT, HIGH);
  delay(5000); // Menyala selama 5 detik
  digitalWrite(GREEN_LIGHT, LOW);

  // Lampu kuning menyala (hati-hati)
  digitalWrite(YELLOW_LIGHT, HIGH);
  delay(2000); // Menyala selama 2 detik
  digitalWrite(YELLOW_LIGHT, LOW);

  // Lampu merah menyala (berhenti)
  digitalWrite(RED_LIGHT, HIGH);
  delay(5000); // Menyala selama 5 detik
  digitalWrite(RED_LIGHT, LOW);
}
