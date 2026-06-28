int led=13;
int pulsador=2;
bool estado_p=0;
bool estado_l=0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(pulsador,INPUT);
  Serial.begin(9600);
}

void loop() {
  estado_p= digitalRead(pulsador);
  delay(210);

  Serial.println(estado_l);
  if ((estado_p==1) and (estado_l ==0)){
    digitalWrite(led,HIGH);
    estado_l=1;
    Serial.println("Encendido");
  }
  else{
    // estado_p= digitalRead(pulsador);
    //delay(90);
    if ((estado_p==1) and (estado_l==1)){
      
      digitalWrite(led,LOW);
      Serial.println("Apagado"); 
      estado_l=0;
         
    }
    
  }
}
