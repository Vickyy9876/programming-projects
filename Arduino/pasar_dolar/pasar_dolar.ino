void setup() {
Serial.begin(9600);
float resultado = pasar_a_dolares(1500,140);
Serial.println(resultado);
}

void loop() {
// put your main code here, to run repeatedly:

}
float pasar_a_dolares(float valor, float cotizacion){
float dolares;
dolares=valor/cotizacion;
return dolares;
}
