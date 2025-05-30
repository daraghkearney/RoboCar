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
const int rightBumperPin = 3;  
const int leftBumperPin = 2;   

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
  digitalWrite(rightEnablePin, HIGH);  
  digitalWrite(leftEnablePin, HIGH);   

  // Drive forwards
  driveForwards();
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

  // Pause for 2 seconds
  delay(250);

  // Now, reverse the RoboCar
  RptCount = 0;
  while (RptCount < 1) {

    // Right motor rotates backward
    digitalWrite(rightMotorPin1, HIGH);
    digitalWrite(rightMotorPin2, LOW);

    // Left motor rotates backward
    digitalWrite(leftMotorPin1, LOW);
    digitalWrite(leftMotorPin2, HIGH);


    
    analogWrite(LedC, 255);        // Turn off
    delay(500);

    analogWrite(LedC, 0);      // Full brightness
    delay(500);

     analogWrite(LeftLedB, 255);  // Full brightness
    analogWrite(RightLedB, 255); // Full brightness
    delay(500);

     analogWrite(LeftLedB, 0);    // Turn off
    analogWrite(RightLedB, 0);   // Turn off
    delay(500);

    // LEDs control using PWM
    analogWrite(LeftLedA, 255);  // Full brightness
    analogWrite(RightLedA, 255); // Full brightness
    delay(500);

     analogWrite(LeftLedA, 0);    // Turn off
    analogWrite(RightLedA, 0);   // Turn off
    delay(500);

    

    RptCount++;
  }

  // Back to the beginning
  driveForwards();
}
