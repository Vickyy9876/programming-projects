int rojo=3;
int verde=5;
int azul=6;
int pulsador=2;
int demora=100;


void setup() {
  pinMode(rojo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(azul, OUTPUT);
  pinMode(pulsador, INPUT);
  Serial.begin(9600);
  color(rojo, 255, verde, 0, azul,0);
  delay(1000);
  color(rojo, 0, verde, 255, azul,0);
  delay(1000);
  color(rojo, 0, verde, 0, azul,255);
  delay(1000);
  color(rojo, 0, verde, 0, azul,0);
}

void loop() {
  int lectura_pulsador=digitalRead(pulsador);
  Serial.println(lectura_pulsador);
  delay(demora);
  if(lectura_pulsador==1){
     int valor_R=random(0,255);
     int valor_G=random(0,255);
     int valor_B=random(0,255);
     Serial.print("Rojo: ");
     Serial.println(valor_R);
     Serial.print("Verde: ");
     Serial.println(valor_G);
     Serial.print("Azul: ");
     Serial.println(valor_B);
     
     color(rojo,valor_R, verde, valor_G, azul, valor_B);
     delay(1000);
     color(rojo,0, verde, 0, azul, 0); //Apago el led
     lectura_pulsador=0;
  }
  else{
    color(rojo,0, verde, 0, azul, 0);
  }

 

}

void color(int pin_R,int valor_R, int pin_G, int valor_G, int pin_B, int valor_B){
  analogWrite(pin_R,valor_R);
  analogWrite(pin_G,valor_G);
  analogWrite(pin_B,valor_B);
  
  
}
