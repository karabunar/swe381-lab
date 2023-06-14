// C++ code
//

int led1 = 11;
int led2 = 10;
int led3 = 9;
int led4 = 8;
int pirPin = 7;
int pirState = LOW;
int ledCount = 0;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(pirPin, INPUT);
}

void loop()
{
  int pirVal = digitalRead(pirPin);
  
  if (pirVal == HIGH && pirState == LOW){
    ledCount++;
    pirState = HIGH;
    
    if(ledCount == 1){
      digitalWrite(led2, HIGH);}
     
    else if(ledCount ==2){
      digitalWrite(led3, HIGH);}
                   
    else if(ledCount==3){
      digitalWrite(led4, HIGH);}
                   
    else if(ledCount==4){
      digitalWrite(led1, HIGH);
      digitalWrite(led2, HIGH);
      digitalWrite(led3, HIGH);
      digitalWrite(led4, HIGH);
      ledCount=0;}
   }
                   
  else if (pirVal == LOW && pirState == HIGH){
    pirState = LOW;}
                   
 if(ledCount==0){                  
 digitalWrite(led1, HIGH);
 digitalWrite(led2, LOW);
 digitalWrite(led3, LOW);
 digitalWrite(led4, LOW);}

      
}

