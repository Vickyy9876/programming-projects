#include <Servo.h>
Servo miServo;
int red=5;
int green=6;
int blue=11;
int boton1=2;
int boton2=3;
int buzzer=4;


int ingresada[5];
int clave[5]={1,2,2,1,1};
int posicion=0;

void setup() {
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);
  pinMode(boton1,INPUT);
  pinMode(boton2,INPUT);
  pinMode(buzzer,OUTPUT);
  miServo.attach(9);
  miServo.write(0);
  Serial.begin(9600);}

void loop() {
  ver_boton1();
  ver_boton2();
  estado_normal();
  if(posicion==5){
    verificar_clave();
  }
  
  
  

}


void registrar_boton(int valor){
 if(posicion<5){
  digitalWrite(green,HIGH);
  digitalWrite(red,HIGH);
  digitalWrite(blue,LOW);
  
  ingresada[posicion]= valor;
  posicion++;       // lee el boton que se ingreso en cada posicion
  Serial.print("Boton: ");
  Serial.println(valor);
  delay(200);
   digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
 }
  
}

void ver_boton1(){
  if(digitalRead(boton1)==1){             //lee el estado del boton 1
    registrar_boton(1);
    delay(200);
  }
}
void ver_boton2(){
  if(digitalRead(boton2)==1){
    registrar_boton(2);                     //lee el estado del boton 2
    delay(200);
  }
}

void encender_buzzer(){
  digitalWrite(buzzer,HIGH);                  //enciende el buzzer
  delay(200);
  digitalWrite(buzzer,LOW);
}


void led_verde(){
  digitalWrite(green, HIGH);
  delay(3000);
  digitalWrite(green, LOW);                   //correcta=true cambia a color verde y luego vuelve a azul
  delay(100);
  digitalWrite(blue,HIGH);
}
void mover_servo(){
    miServo.write(90);
    delay(7000);
    miServo.write(0);                   //mueve el servo
  
}
void correcto(){
  led_verde();
  encender_buzzer();  //funcion que junta funciones cuando correcta=true
  mover_servo();
}
void led_rojo(){
  digitalWrite(red, HIGH);
  delay(1000);
  digitalWrite(red,LOW);
  
}
void buzzer_incorrecto(){
  digitalWrite(buzzer,HIGH);                  //enciende el buzzer incorrecto
  delay(1000);
  digitalWrite(buzzer,LOW);
  
}
void estado_normal(){
  digitalWrite(blue,HIGH);
}
void incorrecto(){
  led_rojo();
  buzzer_incorrecto();
  delay(2000);
  estado_normal();
}
void verificar_clave(){
  bool correcta= true;
  for(int i=0;i<5;i++){
    if(ingresada[i]!=clave[i]){                 //verifica si fue correcta la secuencia
      correcta=false;
    }
}
  posicion=0;
 
  if(correcta==true){
    Serial.println("Correcta");
    correcto();
  }
  else{
    Serial.println("Incorrecta");
    incorrecto();
  }
  
}
