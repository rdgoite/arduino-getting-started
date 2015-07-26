const int LED = 13;

int input = 0;

void setup() {
  pinMode(LED, OUTPUT);
  //analog pins are automatically set for input
}

void loop() {
  input = analogRead(0);
  digitalWrite(LED, HIGH);
  delay(input);
  digitalWrite(LED, LOW);
  delay(input);
}
