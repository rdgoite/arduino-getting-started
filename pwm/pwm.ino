const int LED = 9;
const int BUTTON = 7;

const int MIN_ANALOG = 0;
const int MAX_ANALOG = 255;

const int DELAY = 10;

int input = 0;
int oldInput = input;
int state = 0;

int brightness = 128;
unsigned long startTime = 0;

void setup() {
  pinMode(LED, OUTPUT);
  pinMode(BUTTON, INPUT);
}

void loop() {
  input = digitalRead(BUTTON);
  
  if (input == HIGH && oldInput == LOW) {
    state = 1 - state;
    startTime = millis();
    delay(DELAY);
  }

  if ((input == HIGH && oldInput == HIGH) && (state == 1 && ((millis() - startTime) > 500))) {
    brightness++;
    delay(10);
    if (brightness > MAX_ANALOG) brightness = 0;
  }

  oldInput = input;

  if (state == HIGH) {
    analogWrite(LED, brightness);
  } else {
    analogWrite(LED, LOW);
  }
}
