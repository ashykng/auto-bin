#include <Servo.h>

Servo servo;

int trigPin = 9;
int echoPin = 8;

long duration;
int distance;

void setup() 
{
  servo.attach(7);
  servo.write(0);
 delay(2000);

pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
Serial.begin(9600); 
}
void loop() 
{
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
// Calculating the distance
distance= duration*0.034/2;
Serial.print("Distance: ");
Serial.println(distance);
if ( distance <= 25   )
 {

servo.write(0);
delay(3000);
 } 
else 
{
servo.write(90);

 }

}
