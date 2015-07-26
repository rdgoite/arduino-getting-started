const int LED = 9;

const int DELAY = 10;

int input = 0;

void setup() {
  pinMode(LED, OUTPUT);
  //analog pins are automatically set for input
}

void loop() {
  input = analogRead(0);
  analogWrite(LED, input/4);
  delay(DELAY);
}
