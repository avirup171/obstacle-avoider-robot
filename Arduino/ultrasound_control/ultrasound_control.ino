//Code to understand how the ultrasound sensor works
/*
 * Sensor used: HCSR04
 * Works on the basis of echo
 * Circuit details
 * Arduino      HCSR04
 * D2           trigger
 * D3           Echo
 * +5V          Vcc
 * Gnd          Gnd
 * 
 * For this to work, the trigger pin smits a pulse and the echo pin receives it. We calcualte the time and based on that we note the distance
 * 
 * Thus, the echo pin will be in input mode, the trigger pin will be on output mode
 * 
 * For the distance, to be printed, we will use Serial port communication. What it is, please refer here
 * https://www.arduino.cc/reference/en/language/functions/communication/serial/
 * 
 *  
 */

//Define macros
#define triggerPin 2
#define echoPin 3
long duration;
int distance;


void setup()
{
  //Set trigger pin as output
  pinMode(triggerPin,OUTPUT);
  //Set echo pin as output
  pinMode(triggerPin, INPUT);

  //Serial port begin. Use baud rate as a parameter. Baud rate signifies the speed at which communication happens
  Serial.begin(9600);
}

void loop()
{
  //Set trigger pin to low
  digitalWrite(triggerPin, LOW);
  //Give a slight delay of 2 microseconds for everything to begin operation
  delayMicroseconds(2);
  //Set trigger pin to high essentially send the pulse
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);

  //Wait for the incloming pulse's duration
  duration = pulseIn(echoPin, HIGH);
  //Calculate the distance
  distance = duration * 0.034 / 2;

  //Print the value in Serial monitor
  Serial.print("Distance: ");
  Serial.println(distance);

}
