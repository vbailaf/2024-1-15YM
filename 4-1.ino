int Buzzer_Pin = 7;

void setup() {
  pinMode(Buzzer_Pin, OUTPUT);
}

void loop() {
  tone(Buzzer_Pin, 523);
  delay(1000);
  tone(Buzzer_Pin, 587);
  delay(1000);
  tone(Buzzer_Pin, 659);
  delay(1000);
}