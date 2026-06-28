void setup() {
  Serial.begin(9600);
  bool resultado;
  resultado = control_rango(100);
  Serial.println(resultado);
}

void loop() {

}
bool control_rango(int valor){
    if (valor>=1 && valor<255)
      return true; 
    }
  }
