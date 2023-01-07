#include <Servo.h>
Servo myservo;
int trig = 7;
int servo = 8;
int servOn = 10;
int val = LOW;

#define TRIGGER_PIN 7
void setup() {

Serial.begin(9600);
pinMode(trig, INPUT);
myservo.attach(servo);

myservo.write(180);   // servo position 180 degree      
delay(1000);
myservo.detach();
}

void loop()
{

val = digitalRead(trig);

if ( val == HIGH ) 
{
servOn = HIGH;
myservo.attach(servo);
delay(1);
myservo.write(140); //servo position 90 degree if CW servo

delay(2000);
myservo.write(180); //servo position 180 degree
delay(2000);
myservo.detach();
}

}
