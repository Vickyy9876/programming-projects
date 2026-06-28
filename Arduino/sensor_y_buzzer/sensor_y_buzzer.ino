int led=4;
int buzzer=8;
int sensor=A0;


void setup() {
  pinMode(led,OUTPUT);
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);

}

void loop() {
 int valor=analogRead(sensor);
 Serial.println(valor);
 delay(140);
  if (valor<400){
      digitalWrite(led, HIGH);
      digitalWrite(buzzer, HIGH);
      delay(200);
      digitalWrite(led, LOW);
      digitalWrite(buzzer, LOW);
      delay(200);
    
    }
  else{
    digitalWrite(led,LOW);
    digitalWrite(buzzer,LOW);}
}
