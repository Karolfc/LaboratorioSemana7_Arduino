const int pinLED1 = 2;
const int pinLED2 = 3;
const int pinLED3 = 4;
const int pinLED4 = 5;
const int pinLED5 = 6;
const int pinPhoto = A0;
int photoValue = 0;

void setup() {
  pinMode(pinLED1, OUTPUT);
  pinMode(pinLED2, OUTPUT);
  pinMode(pinLED3, OUTPUT);
  pinMode(pinLED4, OUTPUT);
  pinMode(pinLED5, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  photoValue = analogRead(pinPhoto);
  //LED 1
  if(photoValue >= 1) {
    digitalWrite(pinLED1, HIGH);
  } else {
    digitalWrite(pinLED1, LOW);
  }
  //LED 2
  if(photoValue >= 400) {
    digitalWrite(pinLED2, HIGH);
  } else {
    digitalWrite(pinLED2, LOW);
  }
  //LED 3
  if(photoValue >= 600) {
    digitalWrite(pinLED3, HIGH);
  } else {
    digitalWrite(pinLED3, LOW);
  }
  //LED 4
  if(photoValue >= 800) {
    digitalWrite(pinLED4, HIGH);
  } else {
    digitalWrite(pinLED4, LOW);
  }
  //LED 5
  if(photoValue >= 1000) {
    digitalWrite(pinLED5, HIGH);
  } else {
    digitalWrite(pinLED5, LOW);
  }

  Serial.println(photoValue);
  delay(10);
}

