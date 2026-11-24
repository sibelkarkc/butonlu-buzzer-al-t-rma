const int buzzerPin = 5;  // Buzzer'ın bağlı olduğu pin
const int buttonPin = 18; // Butonun bağlı olduğu pin

void setup() {
  pinMode(buzzerPin, OUTPUT);
  pinMode(buttonPin, INPUT_PULLDOWN); // Buton için dahili pull-down (veya harici direnç)
}

void loop() {
  int buttonState = digitalRead(buttonPin); // Buton durumu okunuyor

  if (buttonState == HIGH) {
    digitalWrite(buzzerPin, HIGH); // Buzzer'ı çal
  } else {
    digitalWrite(buzzerPin, LOW);  // Buzzer'ı sustur
  }
}
