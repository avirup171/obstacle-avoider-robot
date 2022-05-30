/*
 * Servo motor test code for Arduino UNO
 *  
 */
#include <Servo.h>

//Set the servo to any digital pin
int servoPin = 2;

//Create a servo onject
Servo servo;

void setup()
{
  servo.attach(servoPin);
}

void loop()
{
  //Set servo angle to 0
  servo.write(0);
  delay(5000);

  //set servo angle to 90
  servo.write(90);
  delay(5000);

  //set servo angle to 180
  servo.write(180);
  delay(5000);
}
