#define trigpin 7  
#define echopin 6 

int buzzer = 5;
int led1 = A0; 
int led2 = A1; 
int led3 = A2; 
int led4 = A3; 
int led5 = A4; 

void setup()
{
Serial.begin(9600);
pinMode(trigpin, OUTPUT);
pinMode(echopin, INPUT);
  pinMode(led1, OUTPUT); 
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
 
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  delay(1000); 
}
 
void loop()
{
 int duration, distance;
 digitalWrite(trigpin, HIGH);
 
delayMicroseconds(1000);  
digitalWrite(trigpin, LOW);
 
 
duration = pulseIn(echopin,HIGH);
 
distance = ( duration / 2) / 29.1;
Serial.println("cm:"); 
Serial.println(distance);
 
 
if(  (distance > 0) && (distance <= 10)   ) 
{
  tone(buzzer,450);
  delay(500);
  noTone(buzzer);
  delay(500);
  digitalWrite(led1, HIGH); 
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH); 
} else
if(  (distance > 10) && (distance <= 20)  ) 
{tone(buzzer,450);
  delay(500);
  noTone(buzzer);
  delay(1000);
 
  digitalWrite(led1, LOW); 
  digitalWrite(led2, HIGH);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH); 
 
} else
 
if(  (distance > 20) && (distance <= 30)  ) 
{
 tone(buzzer,450);
  delay(500);
  noTone(buzzer);
  delay(2000);
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW);
  digitalWrite(led3, HIGH);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
} else
 
if(  (distance > 30) && (distance <= 40)  ) 
{
 tone(buzzer,450);
  delay(500);
  noTone(buzzer);
  delay(3000);
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, HIGH);
  digitalWrite(led5, HIGH);
} else
 
if(  (distance > 50) && (distance <= 60)  ) 
{
  tone(buzzer,450);
  delay(500);
  noTone(buzzer);
  delay(4000);
 
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, HIGH);
} else
 
if(  distance > 60 ) 
{
  tone(buzzer,450);
  delay(500);
  noTone(buzzer);
  delay(5000);
 
  digitalWrite(led1, LOW); 
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
} 
 
}
