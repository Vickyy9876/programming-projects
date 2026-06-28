void setup() {
  Serial.begin(9600);
  encabezado();
  float mi50_porciento=cincuenta_porciento(100);
  Serial.println(mi50_porciento);
}

void loop() {
    int valorLDR=lecturaLDR(A0);
    int intensidadLed=map(valorLDR, 0,1023,0,255);
    encender_led(6,intensidadLed);
}

float cincuenta_porciento(float valor) {
    float resultado;
    resultado= valor*0.5;
    return resultado;
    
  }

void encabezado(){
  Serial.println("Hello world");
}

int lecturaLDR(int pinLDR){
    int resultado;
    resultado= analogRead(pinLDR);
    return resultado;
}
void encender_led(int intensidad, int pinLed){
    analogWrite(pinLed, intensidad);
    
}
