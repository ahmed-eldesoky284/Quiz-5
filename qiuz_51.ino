const byte tilt_pin = 2;
unsigned long STime = 0;
unsigned long ETime = 0;
bool print = false;

void setup() {
  Serial.begin(9600);
  pinMode(tilt_pin, INPUT);
}

void loop() {
  int tiltState = digitalRead(tilt_pin);
   if (tiltState == 1 && !print) {
    STime = millis();
    print = true;
  } else if (tiltState == 0 && print) {
    ETime = millis();
    unsigned long Millis = ETime - STime;
    float Seconds = (float)Millis / 1000;
    Serial.print("Time: ");
    Serial.print(Seconds);
    Serial.println(" s");
    delay(100); 
    print = false;
  }
}
