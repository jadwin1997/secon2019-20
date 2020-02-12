
// This file is for running and calibrating the servos for Msstate Secon 2020
// Its sole purpose is to run the servos on a Adafruit PWM Servo Shield

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver servoShield = Adafruit_PWMServoDriver();

// Prototype for converter
double degreesToPwm(int degree);

// Position used when attaching the horns to the servos
double calibrationPos = degreesToPwm(90);

// Positions used for the actual pressing of buttons
int restAngle = 90;
int angleDelta = 10;
double restingPos = degreesToPwm(restAngle);
double leftPressingPos = degreesToPwm(restAngle + angleDelta);
double rightPressingPos = degreesToPwm(restAngle - angleDelta);

int switchPin = 12;

void setup()
{
  Serial.begin(9600);
  Serial.println("Servo Calibration and Testing");

  pinMode(switchPin, INPUT_PULLUP);

  // Begin I2C communication with servo shield
  servoShield.begin();
  servoShield.setPWMFreq(100);
}

void loop() {
  // Trigger if switch is pressed (Low)
  if (digitalRead(switchPin))
  {
    // Only using servo 4 and 5 for now
    pressButton(4);
    pressButton(5);
  }
}

double degreesToPwm(int degree)
{
    return (725 / 180 * degree + 275);
}

void pressButton(int servoNumber)
{
  // Extend to pressing position
  if (isLeftServo(servoNumber))
  {
    servoShield.setPWM(servoNumber, 0, leftPressingPos);
  }
  else
  {
    servoShield.setPWM(servoNumber, 0, rightPressingPos);
  }

  delay(1000);

  // Retract to resting position
  servoShield.setPWM(servoNumber, 0, restingPos);
}

bool isLeftServo(int servoNumber)
{
  // Found the specific motors
  if (servoNumber == 9 || servoNumber == 8 || servoNumber == 6 || servoNumber == 5 || servoNumber == 2) 
  {
    return false;
  }

  return true;
}