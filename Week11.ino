// C++ code
//

#include<Servo.h>

int ldr=A0;
int valueldr;
int moisture=A1;
int valuemois;
int servopin=12;
Servo valve;
int temp_pin=A2;
float temp=0;

void setup()
{
  pinMode(ldr, INPUT);
  Serial.begin(9600);
  valve.attach(servopin);
  Serial.begin(9600);
  pinMode(moisture, INPUT);
  Serial.begin(9600);
  pinMode(temp_pin, INPUT);
  Serial.begin(9600);
           
}

void loop()
{
  temp=analogRead(temp_pin);
  
  float realtemp=map(temp, 20, 358, -40,125);
  Serial.print("Celcius:");
  Serial.println(realtemp);
  Serial.print("Fahrenheit");
  Serial.println(realtemp*1.8+32);
  
  valueldr=analogRead(ldr);
  Serial.println(valueldr);
  
  valuemois=analogRead(moisture);
  Serial.println(valuemois);
  
  if(valueldr>640){
    
    if(realtemp>=-40 && realtemp <=0 && valuemois>=0 && valuemois<=175){
      valve.write(10);
    }
    else if(realtemp>=1 && realtemp <=20 && valuemois>=0 && valuemois<=175){
      valve.write(25);
    }
    else if(realtemp>=21 && realtemp <=40 && valuemois>=0 && valuemois<=175){
      valve.write(50);
    }
    else if(realtemp>=40 && valuemois>=0 && valuemois<=175){
      valve.write(90);
    }
    else if(realtemp>=-40 && realtemp <=0 && valuemois>=175 && valuemois<=350){
      valve.write(0);
    }
    else if(realtemp>=1 && realtemp <=20 && valuemois>=175 && valuemois<=350){
      valve.write(10);
    }
    else if(realtemp>=21 && realtemp <=40 && valuemois>=175 && valuemois<=350){
      valve.write(20);
    }
    else if(realtemp>=40 && valuemois>=175 && valuemois<350){
      valve.write(70);
    }
    
  }
  
  else{
    valve.write(90);
  }
  delay(500);
  
}
