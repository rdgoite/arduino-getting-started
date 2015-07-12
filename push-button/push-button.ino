const int LED = 13;
const int BUTTON = 7;

int input = LOW;
int state = input;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  input = digitalRead(BUTTON);
  if (input == HIGH) {
    state = 1 - state;
  }
  digitalWrite(LED, state);
}
