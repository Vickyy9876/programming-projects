int led=5;
int estado_led=0;
int pulsador1=2;
int pulsador2=3;
int demorapul=140;

void setup() {
  pinMode(led,OUTPUT);
  pinMode(pulsador1,INPUT);
  pinMode(pulsador2,INPUT);
  Serial.begin(9600);

}

void loop() {
  int estado_p1=digitalRead(pulsador1);
  int estado_p2=digitalRead(pulsador2);
  delay(demorapul);
  //controlo si el pulsador 1 esta activado y el led apagado, o el pulsador 2 esta activado y el led apagado
  if(((estado_p1==1) and (estado_led==0)) or ((estado_p2==1)and(estado_led==0))){
    
    digitalWrite(led,HIGH);
    estado_led=1;
    Serial.println("Luz encendida");}
    
  //controlo si el pulsador 1 esta activado y el led prendido, o el pulsador 2 esta activado y el led prendido
  else{
    if(((estado_p1==1)and (estado_led==1)) or ((estado_p2==1)and(estado_led==1))){
      digitalWrite(led,LOW);
      estado_led=0;
      Serial.println("Luz apagada");
    }
  }
 
  
}
