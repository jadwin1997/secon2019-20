/* Sweep
 by BARRAGAN <http://barraganstudio.com>
 This example code is in the public domain.

 modified 8 Nov 2013
 by Scott Fitzgerald
 http://www.arduino.cc/en/Tutorial/Sweep
*/
#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver servoShield = Adafruit_PWMServoDriver();

double degreesToPwm(int degree);

int calibrationPos = 90;    // variable to store the servo position
int restingPos = 80;
int pressingDeta = 30;

double calibrationPos = degreesToPwm(90);
double restingPos = degreesToPwm(80);
double leftPressingPos = degreesToPwm(80)

void setup() {
  myservo.attach(8);  // attaches the servo on pin 9 to the servo object
//  myservo.write(0);
  Serial.begin(9600);
  Serial.println("yooo");
}

void loop() {
//  Controls based on input-------
  while (Serial.available() > 0) {
    int inChar = Serial.read();
    if (isDigit(inChar)) {
      // convert the incoming byte to a char and add it to the string:
      inString += (char)inChar;
    }
    // if you get a newline, print the string, then the string's value:
    if (inChar == '-') {
      pos = inString.toInt();
      Serial.print("Finished int: ");
      Serial.println(pos);
      inString = "";
      myservo.write(pos);
    }
  }

//Swaying back and forth------
//myservo.write(0);
//delay(800);
//myservo.write(180);
//delay(1000);

//  delay(3000);
//  pressButton();

}

double degreesToPwm(int degree)
{
    return (725 / 180 * degree + 275);
}

void pressButton(){
  myservo.write(pressingPos);
  delay(500);
  myservo.write(restingPos);
}


