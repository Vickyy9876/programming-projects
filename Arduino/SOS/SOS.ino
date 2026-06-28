int buzzer=13;
int delay_S=100;
int delay_O=300;
int delay_final=1000;
int entre_letras=300;
void setup() {
  pinMode(buzzer,OUTPUT);
}

void loop() {
    for(int i=1; i<=3; i++){
      digitalWrite(buzzer,HIGH);
      delay(delay_S);
      digitalWrite(buzzer,LOW);
      delay(delay_S);
    }
    delay(entre_letras);
    for(int i=1;i<=3;i++){
      digitalWrite(buzzer,HIGH);
      delay(delay_O);
      digitalWrite(buzzer,LOW);
      delay(delay_O);
    }
    delay(entre_letras);
    for(int i=1; i<=3; i++){
      digitalWrite(buzzer,HIGH);
      delay(delay_S);
      digitalWrite(buzzer,LOW);
      delay(delay_S);
    }
    delay(delay_final);
}
