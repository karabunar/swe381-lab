// C++ code
//
#include <Servo.h>
Servo myServo;

int potPin = A0;
int servoPos;

void setup()
{
  myServo.attach(9);
  Serial.begin(9600);
}

void loop()
{
  int potVal = analogRead(potPin);
  servoPos = map(potVal, 0, 1023, 0, 180);
  
  myServo.write(servoPos);
  
  Serial.print("My serial position:");
  Serial.println(servoPos);
  
  delay(15);
  
}
