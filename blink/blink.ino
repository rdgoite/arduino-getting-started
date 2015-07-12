const int LED1 = 13;
const int LED2 = 12;
const int LED3 = 11;

const int DELAY = 500;

void setup() {
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
}

void loop() {
  switchOn(LED1);
  wait();
  switchOff(LED1);
  switchOn(LED2);
  wait();
  switchOff(LED2);
  switchOn(LED3);
  wait();
  switchOff(LED3);
  wait();
  switchOn(LED1);
  switchOn(LED2);
  switchOn(LED3);
  wait();
  switchOff(LED1);
  switchOff(LED2);
  switchOff(LED3);
  wait();
}

void switchOn(int led) {
  digitalWrite(led, HIGH);
}

void switchOff(int led) {
  digitalWrite(led, LOW);
}

void wait() {
  delay(DELAY);
}
