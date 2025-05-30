const int LeftLedA = 12;
const int LeftLedB = 13;
const int LedC = 1;
const int RightLedA = 4;
const int RightLedB = 5;

// Right Motor Pins
const int rightEnablePin = 11;
const int rightMotorPin1 = 9;
const int rightMotorPin2 = 10;

// Left Motor Pins
const int leftEnablePin = 6;
const int leftMotorPin1 = 7;
const int leftMotorPin2 = 8;

// Bumper Pins
const int rightBumperPin = 3;  // Replace with the actual pin number
const int leftBumperPin = 2;   // Replace with the actual pin number

void setup() {
  // Set pin modes
  pinMode(rightEnablePin, OUTPUT);
  pinMode(rightMotorPin1, OUTPUT);
  pinMode(rightMotorPin2, OUTPUT);

  pinMode(leftEnablePin, OUTPUT);
  pinMode(leftMotorPin1, OUTPUT);
  pinMode(leftMotorPin2, OUTPUT);

  pinMode(rightBumperPin, INPUT);
  pinMode(leftBumperPin, INPUT);

  // Initialize motor control pins
  digitalWrite(rightEnablePin, HIGH);  // Enable the right motor driver
  digitalWrite(leftEnablePin, HIGH);   // Enable the left motor driver

  // Drive forwards
  driveForwards();
}

void loop() {
  // Check bumpers
  if (digitalRead(leftBumperPin) == LOW) {
    // If left bumper is hit, briefly drive right motor backward
    driveRightBackwards();
    delay(850);  // Adjust the delay based on your preference
    driveForwards();
  }

  if (digitalRead(rightBumperPin) == LOW) {
    // If right bumper is hit, briefly drive left motor backward
    driveLeftBackwards();
    delay(850);  // Adjust the delay based on your preference
    driveForwards();
  }
}

void driveForwards() {
  // Right motor rotates forward
  digitalWrite(rightMotorPin1, LOW);
  digitalWrite(rightMotorPin2, HIGH);

  // Left motor rotates forward
  digitalWrite(leftMotorPin1, HIGH);
  digitalWrite(leftMotorPin2, LOW);

  digitalWrite(LeftLedA,HIGH);
digitalWrite(RightLedA,HIGH);
delay(500);

digitalWrite(LeftLedA,LOW);
digitalWrite(RightLedA,LOW);
delay(500);

digitalWrite(LeftLedB,HIGH);
digitalWrite(RightLedB,HIGH);
delay(500);

digitalWrite(LeftLedB,LOW);
digitalWrite(RightLedB,LOW);
delay(500);

digitalWrite(LedC,HIGH);
delay(500);

digitalWrite(LedC,LOW);
delay(500);
}

void driveRightBackwards() {
  // Right motor rotates backward
  digitalWrite(rightMotorPin1, HIGH);
  digitalWrite(rightMotorPin2, LOW);

  // Left motor rotates forward
  digitalWrite(leftMotorPin1, HIGH);
  digitalWrite(leftMotorPin2, LOW);
}

void driveLeftBackwards() {
  // Right motor rotates forward
  digitalWrite(rightMotorPin1, HIGH);
  digitalWrite(rightMotorPin2, LOW);

  // Left motor rotates backward
  digitalWrite(leftMotorPin1, HIGH);
  digitalWrite(leftMotorPin2, LOW);
}
