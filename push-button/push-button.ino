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
  //push button goes from low to high
  if (previousInput == LOW && input == HIGH) {
    state = 1 - state;
    delay(10);
  }
  previousInput = input;
  digitalWrite(LED, state);
}
