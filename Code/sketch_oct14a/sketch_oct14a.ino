#define directive
const int STEP_PIN = 1;
const int DIR_PIN = 2;
const int EN_PIN = 3;

const int STEP_PER_REV = 200;

void setup() {
  pinMode(STEP_PIN, OUTPUT);
  pinMode(DIR_PIN, OUTPUT);
  pinMode(EN_PIN, OUTPUT);
  
  digitalWrite(EN_PIN, LOW); 
}

void loop() {

  digitalWrite(DIR_PIN, HIGH);
  
  for (int i = 0; i < STEP_PER_REV; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(1000);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(1000);
  }

  delay(1000);

  digitalWrite(DIR_PIN, LOW);

  for (int i = 0; i < STEP_PER_REV; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(1000);
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(1000);
  }
  
  delay(1000);
}
