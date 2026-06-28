void setup() {
Serial.begin(9600);
float resultado=sumar_valores(6,3);
Serial.println(resultado);
}

void loop() {

}
float sumar_valores(float a, float b){
  float resultado;
  resultado=a+b;
  return resultado;
}
