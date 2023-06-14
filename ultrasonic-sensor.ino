// C++ code
//

int redPin = 7;
int bluePin =6;
int greenPin =5;

long calculateTheTime(int trigPin, int echoPin){
  pinMode(trigPin, OUTPUT);
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  pinMode(echoPin, INPUT);
  
  return pulseIn(echoPin, HIGH);
}
  
void setup()
{
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop()
{
  long time = calculateTheTime(9,9);
  
  long distance = 0.01715 * time;
  
  Serial.print("Distance:");
  Serial.print(distance);
  Serial.println("cm");
  
  
  if (distance >=0 && distance <= 70){
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);}
  if (distance >=71 && distance <= 140){
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);}
  if (distance >=141 && distance <= 200){
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);}
   

}
