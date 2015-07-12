const int LED = 13;
const int BUTTON = 7;

int input = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  input = digitalRead(BUTTON);
  digitalWrite(LED, input);
}
