int led=13;
int pot=A0;

void setup() {
  Serial.begin(9600);
  pinMode(led,OUTPUT);
  pinMode(pot,INPUT);
}

void loop() {
 int lectura_demora=leer_demora(pot);
 Serial.println(lectura_demora);
 encender_led(lectura_demora,led);

}


int leer_demora(int pin_pot){
  int demora=analogRead(pin_pot);
  demora=map(demora,0,1023,100,200);
  return demora;
}

void encender_led(int demora, int pin_led){
  
  digitalWrite(pin_led,HIGH);
  delay(demora);
  digitalWrite(pin_led,LOW);
  delay(demora);
}
