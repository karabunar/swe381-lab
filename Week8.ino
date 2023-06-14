// C++ code
//

int led1= 12;
int led2= 11;
int led3= 10;
int led4= 9;

int buttonPin=13;

int ledState1= HIGH;
int ledState2= LOW;
int ledState3= LOW;
int ledState4= LOW;

int buttonState;
int lastButtonState = LOW;

int mode = 0;

int previousMillis=0;
int interval = 200;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  buttonState = digitalRead(buttonPin);
  if (buttonState != lastButtonState){
    if(buttonState==HIGH){
      mode++;
      if (mode>1){
        mode=0;
      }
    }
    delay(200);
  }
  if (mode==0){
    if(millis()-previousMillis>=interval){
      previousMillis=millis();
      if(ledState1==HIGH){
        ledState1=LOW;
        ledState2=HIGH;}
      else if(ledState2==HIGH){
        ledState2=LOW;
        ledState3=HIGH;}
      else if(ledState3==HIGH){
        ledState3=LOW;
        ledState4=HIGH;}
      else if(ledState4==HIGH){
        ledState4=LOW;
        ledState1=HIGH;}
        
      digitalWrite(led1, ledState1);
      digitalWrite(led2, ledState2);
      digitalWrite(led3, ledState3);
      digitalWrite(led4, ledState4);
    }
  }
  
  else if(mode==1){
    if(millis()-previousMillis>= interval){
      previousMillis=millis();
        
        if(ledState4==HIGH){
        ledState4=LOW;
        ledState3=HIGH;}
      else if(ledState3 == HIGH){
        ledState3=LOW;
        ledState2=HIGH;}
      else if(ledState2 == HIGH){
        ledState2=LOW;
        ledState1=HIGH;}
      else if(ledState1 == HIGH){
        ledState1=LOW;
        ledState4=HIGH;}
      digitalWrite(led1, ledState1);
      digitalWrite(led2, ledState2);
      digitalWrite(led3, ledState3);
      digitalWrite(led4, ledState4);
    }
  }
  lastButtonState=buttonState;
}
