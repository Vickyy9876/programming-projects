#include <Servo.h>
Servo miServo;
int red=5;
int green=6;
int blue=11;
int boton1=2;
int boton2=3;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(boton1,INPUT);
  pinMode(boton2,INPUT);
  miServo.attach(9);
  miServo.write(0);
  Serial.begin(9600);}

void loop() {
  ver_botones();
  

}

void ver_botones(){
  if(digitalRead(boton1)==1){
    miServo.write(90);
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
    digitalWrite(blue,LOW);
    delay(800);
    miServo.write(0);
    
  }

  if(digitalRead(boton2)==1){
    miServo.write(180);
    digitalWrite(red,LOW);
    digitalWrite(green,LOW);
    digitalWrite(blue,HIGH);
    delay(800);
    miServo.write(0);
  }
}
