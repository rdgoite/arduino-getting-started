const int LED = 9;

const int MIN_ANALOG = 0;
const int MAX_ANALOG = 255;

const int DELAY = 10;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  for (int level = MIN_ANALOG; level < MAX_ANALOG; level++) {
    analogWrite(LED, level);
    delay(DELAY);
  }

  for(int level = MAX_ANALOG; level > MIN_ANALOG; level--) {
    analogWrite(LED, level);
    delay(DELAY);
  }
}
