const int potPin = A2;
const int ledPinR = 10;
const int ledPinG = 9;
const int btnPin = 8;
int led;

void setup() {
  Serial.begin(9600);
  pinMode(btnPin, INPUT_PULLUP);
  pinMode(ledPinR, OUTPUT);
  pinMode(ledPinG, OUTPUT);
  Serial.println("Sistema iniciado");
}

void loop() {
  int btnState = digitalRead(btnPin);
  int value = analogRead(potPin);
  int val = map(value, 0, 1024, 10, 180);
  if (btnState == LOW) {
    Serial.println(val);
    delay(1000);
  }

  if (Serial.available() > 0) {
    char inByte = Serial.read();
    if (inByte == 'e') {
      digitalWrite(ledPinG, HIGH);
    } else if (inByte == 'f') {
      digitalWrite(ledPinG, LOW);
    }
    if (inByte == 'd') {
      digitalWrite(ledPinR, HIGH);
    } else if (inByte == 'c') {
      digitalWrite(ledPinR, LOW);
    }
  }
}