const int LeftLedA = 12;
const int LeftLedB = 13;
const int LedC = 1;
const int RightLedA = 4;
const int RightLedB = 5;
const int rightEnablePin = 11;
const int rightMotorPin1 = 9;
const int rightMotorPin2 = 10;
const int leftEnablePin = 6;
const int leftMotorPin1 = 7;
const int leftMotorPin2 = 8;
const int rightBumperPin = 3;
const int leftBumperPin = 2;  

void reverse();
void drive();
void setup() {
  pinMode(rightEnablePin, OUTPUT);
  pinMode(rightMotorPin1, OUTPUT);
  pinMode(rightMotorPin2, OUTPUT);
  pinMode(leftEnablePin, OUTPUT);
  pinMode(leftMotorPin1, OUTPUT);
  pinMode(leftMotorPin2, OUTPUT);
  pinMode(rightBumperPin, INPUT);
  pinMode(leftBumperPin, INPUT);
  digitalWrite(rightEnablePin, HIGH);
  digitalWrite(leftEnablePin, HIGH);
}

void loop() {
  if (digitalRead(rightBumperPin) == LOW) {
    reverse();
    delay(600);
    right();  
    delay(500);
  }
  else
  {
    drive();
  }
}

void drive() {
digitalWrite(leftEnablePin, HIGH);
digitalWrite(rightEnablePin, HIGH);
  digitalWrite(leftMotorPin1, HIGH);
  digitalWrite(leftMotorPin2, LOW);
  digitalWrite(rightMotorPin1, HIGH);
  digitalWrite(rightMotorPin2, LOW);
 for(int y=0; y <1; y++)
{
digitalWrite(LeftLedA,HIGH);
digitalWrite(RightLedA,HIGH);
delay(200);
digitalWrite(LeftLedA,LOW);
digitalWrite(RightLedA,LOW);
delay(200);

digitalWrite(LeftLedB,HIGH);
digitalWrite(RightLedB,HIGH);
delay(200);
digitalWrite(LeftLedB,LOW);
digitalWrite(RightLedB,LOW);
delay(200);

digitalWrite(LedC,HIGH);
delay(200);
digitalWrite(LedC,LOW);
}
}

void right()
{
  digitalWrite(leftEnablePin, HIGH);
  digitalWrite(rightEnablePin, HIGH);
  digitalWrite(leftMotorPin1, LOW);
  digitalWrite(leftMotorPin2, HIGH);
  digitalWrite(rightMotorPin1, HIGH);
  digitalWrite(rightMotorPin2, LOW);

  for(int y=0; y<1;y++)
  {
  digitalWrite(RightLedA, HIGH);
  digitalWrite(RightLedB, HIGH);
  delay(200);
  digitalWrite(RightLedA, LOW);
  digitalWrite(RightLedB, LOW);
  delay(200);
  }
}


void reverse()
{
 digitalWrite(leftEnablePin, HIGH);
 digitalWrite(rightEnablePin, HIGH);

  digitalWrite(leftMotorPin1, LOW);
 digitalWrite(leftMotorPin2, HIGH);
  digitalWrite(rightMotorPin1, LOW);
 digitalWrite(rightMotorPin2, HIGH);
for(int y=0;y<1;y++)
{
   digitalWrite(LedC,HIGH);
 delay(200);
 digitalWrite(LedC,LOW);
 delay(200);
 digitalWrite(LeftLedB,HIGH);
 digitalWrite(RightLedB, HIGH);
 delay(200);
 digitalWrite(LeftLedB,LOW);
 digitalWrite(RightLedB,LOW);
 delay(200);
digitalWrite(LeftLedA,HIGH);
 digitalWrite(RightLedA, HIGH);
 delay(200);
 digitalWrite(LeftLedA,LOW);
 digitalWrite(RightLedA,LOW);
 delay(200);
}
}
