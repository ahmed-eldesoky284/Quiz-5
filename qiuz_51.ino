const byte tilt_pin = 2;
unsigned long STime = 0;
unsigned long ETime = 0;
bool IsPrinting = false;
bool IsTilted = false;

enum State {
  WAIT_A_TILT,
  TILT_DETECTED,
  WAIT_A_RELEASE
};

State currentState = WAIT_A_TILT;

void setup() {
  Serial.begin(9600);
  pinMode(tilt_pin, INPUT);
}

void loop() {
  int tiltState = digitalRead(tilt_pin);

  switch (currentState) {
    case WAIT_A_TILT:
      if (tiltState == HIGH) {
        STime = millis();
        IsTilted = true;
        currentState = TILT_DETECTED;
      }
      break;

    case TILT_DETECTED:
      if (tiltState == LOW) {
        ETime = millis();
        IsTilted = false;
        unsigned long durationMillis = ETime - STime;
        float durationSeconds = (float)durationMillis / 1000;
        Serial.print("Time Duration: ");
        Serial.print(durationSeconds);
        Serial.println(" s");
        currentState = WAIT_A_RELEASE;
      }
      break;

    case WAIT_A_RELEASE:
      if (tiltState == HIGH) {
        currentState = WAIT_A_TILT;
      }
      break;
  }
}
