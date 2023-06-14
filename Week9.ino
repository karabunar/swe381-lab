// C++ code
//

#include <LiquidCrystal.h>

int rs= 12, en=11, d4=5, d5=4, d6=3, d7=2,voluppin=6, voldownpin=7, potpin=A0;

LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

float voltagelevel;
int volume=10;
int volupstate=0;
int voldownstate=0;

void setup()
{
  lcd.begin(16, 2);
  lcd.print("Vol=");
  lcd.print(volume);
}

void loop()
{
  lcd.setCursor(1, 0);
  
  volupstate=digitalRead(voluppin);
  voldownstate=digitalRead(voldownpin);
  
  if(volupstate==HIGH){
    if(volume<20){
      volume++;}
    lcd.setCursor(1, 0);
    lcd.print(volume);
  }
  
  if(voldownstate==HIGH){
    if(volume>0){
      volume--;}
    lcd.setCursor(1, 0);
    lcd.print(volume);
  }
  
  delay(50);
    
  
}

