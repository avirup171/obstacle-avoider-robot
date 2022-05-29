//Include pin mappings for the motor driver
/*
 * IN1=7
 * IN2=8
 * IN3=9
 * IN4=10
 */

//User Macros to defin pin numbers
#define in1 7;
#define in2 8;
#define in3 9;
#define in4 10;

void setup()
{
  //Initialise the pins as output
  pinMode(in1,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in1,OUTPUT);
  pinMode(in1,OUTPUT);  
}

void forward()
{
  digitalWrite(in1,HIGH);
  digitalWrite(in1,LOW);
  digitalWrite(in1,HIGH);
  digitalWrite(in1,LOW);
}

void backward()
{
  digitalWrite(in1,LOW);
  digitalWrite(in1,HIGH);
  digitalWrite(in1,LOW);
  digitalWrite(in1,HIGH);
}

void left()
{
  digitalWrite(in1,LOW);
  digitalWrite(in1,HIGH);
  digitalWrite(in1,HIGH);
  digitalWrite(in1,LOW);
  
}

void right()
{
  digitalWrite(in1,HIGH);
  digitalWrite(in1,LOW);
  digitalWrite(in1,LOW);
  digitalWrite(in1,HIGH);
  
}

void halt()
{
  digitalWrite(in1,LOW);
  digitalWrite(in1,LOW);
  digitalWrite(in1,LOW);
  digitalWrite(in1,LOW);
  
}

void loop()
{
  forward();
  delay(5000);
  backward();
  delay(5000);
  left();
  delay(5000);
  right();
  delay(5000);
}
