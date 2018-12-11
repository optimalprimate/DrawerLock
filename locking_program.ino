#include <Servo.h>
int led = 2; // power on LED
int switchstate = 0; //holds state of switch
//int switchpinOUT = 4; //pin for switch power
int switchpinIN = 5; //pin for switch input
Servo servo1;

void setup()
{
   Serial.begin(9600);
  //pinMode(switchpinOUT, OUTPUT);
  pinMode(switchpinIN, INPUT);
  servo1.attach(9);
  pinMode(led, OUTPUT);     //set up LED pin
 digitalWrite(switchpinIN,HIGH);
  
}

void loop(){
  digitalWrite(led, HIGH); //turn on LED for power
  
  switchstate = digitalRead(switchpinIN);
   if (switchstate == 0) {
  
    servo1.write(57); //58=unlocked
 }
  
  else {
    servo1.write(21); //21=locked
  }
  Serial.println(switchstate);
  delay(250);
}

