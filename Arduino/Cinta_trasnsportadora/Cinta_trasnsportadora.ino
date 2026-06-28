int pulsador_contador=2;
int pulsador_reseteo=3;
int led1=4;
int led2=5;
int led3=6;
int cajas=0;
int demora_cajas=200;
int total_cajas_soportadas=10;

void setup() {
  pinMode(pulsador_contador,INPUT);
  pinMode(pulsador_reseteo,INPUT);
  for (int i=4; i<=6;i++){
    pinMode(i,OUTPUT);
  }
  Serial.begin(9600);

}

void loop() {
  int estado=digitalRead(pulsador_contador);
  int estado_reset=digitalRead(pulsador_reseteo);
  delay(100);
  if (estado==1 and cajas !=10){
      cajas++;
      delay(demora_cajas);
      Serial.print("-");
      Serial.print(cajas);
      
    }
    if (cajas==total_cajas_soportadas){
       for(int i=6;i>=4;i--){
           digitalWrite(i,HIGH);
           delay(demora_cajas);
           digitalWrite(i,LOW);
       
           
      }
      for (int i=4;i<=6;i++){
        digitalWrite(i,HIGH);
        delay(demora_cajas);
        digitalWrite(i,LOW);}
        Serial.println(" Cinta colapsada");
        cajas=0;
     
    
   
  }
  if (estado_reset==1){
    Serial.println(" Contador reseteado");
    cajas=0;
  }
  
 
      
      

}
