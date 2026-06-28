int led_rojo=5;
int led_amarillo=6;
int led_verde=7;
int buzzer=9;
int pulsador_1=2;
int pulsador_2=3;
int demora_buzzer=200;
int demora_amarillo=100;


void setup() {
  pinMode(led_rojo,OUTPUT);
  pinMode(led_amarillo,OUTPUT);
  pinMode(led_verde,OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(pulsador_1,INPUT);
  pinMode(pulsador_2,INPUT);
  

}

void loop() {
    int estado_pulsador1=digitalRead(pulsador_1);
    int estado_pulsador2=digitalRead(pulsador_2);
    int estado_ledverde=digitalRead(led_verde);
    delay(100);
    if((estado_pulsador1==1)or (estado_pulsador2==1)){
        digitalWrite(led_verde,HIGH);
        delay(1000);
        digitalWrite(led_verde,LOW);
         delay(1000);
        digitalWrite(led_amarillo,HIGH);
        delay(demora_amarillo);
        digitalWrite(led_amarillo,LOW);
         delay(1000);
        digitalWrite(led_rojo,HIGH);
         
        for (int i=1;i<=10;i++){ 
          
          digitalWrite(buzzer,HIGH);
          delay(demora_buzzer);
          digitalWrite(buzzer,LOW);
          delay(demora_buzzer);
         
          } 
              digitalWrite(led_rojo, LOW);

    
        digitalWrite(led_verde, HIGH);}
          
      else{
        digitalWrite(led_verde,HIGH);}
    
    

}
