const int SIG_PIN = 4;

const int S0_PIN = 7;
const int S1_PIN = 21;
const int S2_PIN = 20;
const int S3_PIN = 10; 
const int LED_PIN = 8;

void setup() {
  Serial.begin(115200);

  pinMode(S0_PIN, OUTPUT);
  pinMode(S1_PIN, OUTPUT);
  pinMode(S2_PIN, OUTPUT);
  pinMode(S3_PIN, OUTPUT);

  digitalWrite(S0_PIN, LOW);
  digitalWrite(S1_PIN, LOW);
  digitalWrite(S2_PIN, LOW);
  digitalWrite(S3_PIN, LOW);

  pinMode(SIG_PIN, INPUT);
  analogReadResolution(12);

  delay(1000);
  Serial.println("Проверка светодатчика на канале C0");
  
}

void loop() {
  unsigned long sum = 0;

  for (int i = 0; i < 20; i++) {
    sum += analogRead(SIG_PIN);
    
    delay(2);
  }

  int value = sum / 20;

  Serial.print("Датчик С0: ");
  Serial.println(value);

  delay(300);
}
