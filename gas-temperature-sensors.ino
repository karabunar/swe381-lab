// C++ code
//

int gasSensorPin = A0;
int tempSensorPin = A1;
int greenLedPin = 7;
int yellowLedPin = 6;
int brownLedPin = 5;
int redLedPin = 4;


void setup()
{
  Serial.begin(9600);
  pinMode(greenLedPin, OUTPUT);
  pinMode(yellowLedPin, OUTPUT);
  pinMode(brownLedPin, OUTPUT);
  pinMode(redLedPin, OUTPUT);
}

void loop()
{
  int gasValue = analogRead(gasSensorPin);
  int tempValue = analogRead(tempSensorPin);
  
  float gasConcentration = map(gasValue, 0, 1023, 300, 700);
  float temperature = map(tempValue, 0, 1023, -40, 120);
  
  Serial.print("Gas:");
  Serial.print(gasConcentration);
  Serial.print("Temperature:");
  Serial.print(temperature);
  
  if (gasConcentration >= 300 && gasConcentration <= 400 && temperature >= -40 && temperature <=0){
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(brownLedPin, LOW);
    digitalWrite(redLedPin, LOW);
  }
  else if (gasConcentration >= 401 && gasConcentration <= 500 && temperature >= -40 && temperature <=0){
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, HIGH);
    digitalWrite(brownLedPin, LOW);
    digitalWrite(redLedPin, LOW);
  }
  else if (gasConcentration >= 501 && gasConcentration <= 600 && temperature >= -40 && temperature <=0){
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(brownLedPin, HIGH);
    digitalWrite(redLedPin, LOW);
  }
  else if (gasConcentration >= 601 && gasConcentration <= 700 && temperature >= -40 && temperature <=0){
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(brownLedPin, LOW);
    digitalWrite(redLedPin, HIGH);
  }
  else if (gasConcentration >= 300 && gasConcentration <= 400 && temperature >= 0 && temperature <= 40){
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(yellowLedPin, HIGH);
    digitalWrite(brownLedPin, LOW);
    digitalWrite(redLedPin, LOW);
  }
  else if (gasConcentration >= 401 && gasConcentration <= 500 && temperature >= 0 && temperature <= 40){
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(brownLedPin, HIGH);
    digitalWrite(redLedPin, LOW);
  }
  else if (gasConcentration >= 501 && gasConcentration <= 600 && temperature >= 0 && temperature <= 40){
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(brownLedPin, LOW);
    digitalWrite(redLedPin, HIGH);
  }
  else if (gasConcentration >= 601 && gasConcentration <= 700 && temperature >= 0 && temperature <=40){
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, HIGH);
    digitalWrite(brownLedPin, HIGH);
    digitalWrite(redLedPin, LOW);
  }
  else if (gasConcentration >= 300 && gasConcentration <= 400 && temperature >= 40 && temperature <=80){
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, HIGH);
    digitalWrite(brownLedPin, LOW);
    digitalWrite(redLedPin, HIGH);
  }
  else if (gasConcentration >= 401 && gasConcentration <= 500 && temperature >= 40 && temperature <=80){
    digitalWrite(greenLedPin, LOW);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(brownLedPin, HIGH);
    digitalWrite(redLedPin, HIGH);
  }
  else if (gasConcentration >= 501 && gasConcentration <= 600 && temperature >= 40 && temperature <=80){
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(yellowLedPin, HIGH);
    digitalWrite(brownLedPin, HIGH);
    digitalWrite(redLedPin, LOW);
  }
  else if (gasConcentration >= 601 && gasConcentration <= 700 && temperature >= 40 && temperature <=80){
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(yellowLedPin, HIGH);
    digitalWrite(brownLedPin, LOW);
    digitalWrite(redLedPin, HIGH);
  }
  else if (gasConcentration >= 300 && gasConcentration <= 400 && temperature >= 80 && temperature <=120){
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(yellowLedPin, LOW);
    digitalWrite(brownLedPin, HIGH);
    digitalWrite(redLedPin, HIGH);
  }
  else if (gasConcentration >= 401 && gasConcentration <= 500 && temperature >= 80 && temperature <=120){
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(yellowLedPin, HIGH);
    digitalWrite(brownLedPin, HIGH);
    digitalWrite(redLedPin, HIGH);
  }
  else if (gasConcentration >= 501 && gasConcentration <= 600 && temperature >= 80 && temperature <=120){
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(yellowLedPin, HIGH);
    digitalWrite(brownLedPin, HIGH);
    digitalWrite(redLedPin, HIGH);
    delay(1000);
  }
  else if (gasConcentration >= 601 && gasConcentration <= 700 && temperature >= 80 && temperature <=120){
    digitalWrite(greenLedPin, HIGH);
    digitalWrite(yellowLedPin, HIGH);
    digitalWrite(brownLedPin, HIGH);
    digitalWrite(redLedPin, HIGH);
    delay(500);
  }
}
