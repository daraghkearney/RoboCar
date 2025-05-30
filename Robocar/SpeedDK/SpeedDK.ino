// Right Motor Pins
const int rightEnablePin = 11;
const int rightMotorPin1 = 9;
const int rightMotorPin2 = 10;

// Left Motor Pins
const int leftEnablePin = 6;
const int leftMotorPin1 = 7;
const int leftMotorPin2 = 8;

void setup() {
  // Set pin modes
  pinMode(rightEnablePin, OUTPUT);
  pinMode(rightMotorPin1, OUTPUT);
  pinMode(rightMotorPin2, OUTPUT);

  pinMode(leftEnablePin, OUTPUT);
  pinMode(leftMotorPin1, OUTPUT);
  pinMode(leftMotorPin2, OUTPUT);

  // Initialize motor control pins
  digitalWrite(rightEnablePin, HIGH);  // Enable the right motor driver
  digitalWrite(leftEnablePin, HIGH);   // Enable the left motor driver

  // Drive forwards
  driveForwards();

  // Gradually increase speed
  for (int speed = 120; speed <= 255; speed += 5) {
    setMotorSpeed(speed);
    delay(500);  // Adjust the delay based on your preference
  }

  // Medium speed
  setMotorSpeed(180);
  delay(3000);  // Adjust the delay based on your preference

  // Max speed
  setMotorSpeed(255);
  delay(3000);  // Adjust the delay based on your preference

  // Stop motors
  setMotorSpeed(0);
}

void driveForwards() {
  int RptCount = 0;
  while (RptCount < 1) {

    // Right motor rotates forward
    digitalWrite(rightMotorPin1, LOW);
    digitalWrite(rightMotorPin2, HIGH);

    // Left motor rotates forward
    digitalWrite(leftMotorPin1, HIGH);
    digitalWrite(leftMotorPin2, LOW);

    // LEDs control using PWM
    analogWrite(LeftLedA, 255);  // Full brightness
    analogWrite(RightLedA, 255); // Full brightness
    delay(500);

    analogWrite(LeftLedA, 0);    // Turn off
    analogWrite(RightLedA, 0);   // Turn off
    delay(500);

    analogWrite(LeftLedB, 255);  // Full brightness
    analogWrite(RightLedB, 255); // Full brightness
    delay(500);

    analogWrite(LeftLedB, 0);    // Turn off
    analogWrite(RightLedB, 0);   // Turn off
    delay(500);

    analogWrite(LedC, 255);      // Full brightness
    delay(500);

    analogWrite(LedC, 0);        // Turn off
    delay(500);

    RptCount++;
  }

void setMotorSpeed(int speed) {
  // Set speed for both motors using PWM
  analogWrite(rightMotorPin1, HIGH);
  analogWrite(rightMotorPin2, LOW);

  analogWrite(leftMotorPin1, HIGH);
  analogWrite(leftMotorPin2, LOW);

  analogWrite(rightEnablePin, speed);
  analogWrite(leftEnablePin, speed);
}
