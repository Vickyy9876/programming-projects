void setup()
{
  pinMode(7, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop()
{
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(10000); // luz roja
  
  digitalWrite(7, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  delay(1000); //luz amarilla 
  
  digitalWrite(7, LOW);
  digitalWrite(6, LOW);
  digitalWrite(5, HIGH);
  delay(10000); // luz verde
  
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7,LOW);
  delay(2000);// luz amarilla vuelta
  
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(5, LOW);
  delay(10000); // luz roja empieza devuelta

}
