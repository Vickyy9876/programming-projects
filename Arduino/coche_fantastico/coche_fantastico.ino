int demora=140;

void setup() {
  for (int i=2;i<=7;i++){
    pinMode(i,OUTPUT);
}
}

void loop() {
  for(int i=2;i<=7;i++){
    digitalWrite(i,HIGH);
    delay(demora);
    digitalWrite(i,LOW);
    delay(demora);
  }
  for(int i=6;i>=3;i--){
    digitalWrite(i,HIGH);
    delay(demora);
    digitalWrite(i,LOW);
    delay(demora);
  }
  

}
