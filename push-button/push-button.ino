const int LED = 13;
const int BUTTON = 7;

int input = LOW;
int previousInput = input;
int state = input;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  input = digitalRead(BUTTON);
  if (input == HIGH && previousInput == LOW) {
    state = 1 - state;
  }
  previousInput = input;
  digitalWrite(LED, state);
}
