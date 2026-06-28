int pin_led=13;
int pin_pulsador=2;
bool estado_led= false;
float promedio=0;
const float pi=3.14;


void setup() {
  Serial.begin(9600);
  pinMode(pin_pulsador, INPUT);
  pinMode(pin_led, OUTPUT);
  holamundo();

}

void loop() {
  digitalWrite(pin_led, HIGH);
 // Serial.println("Led encendido");
  delay(1000);
  digitalWrite(pin_led,LOW);
   //Serial.println("Led apagado");
  float valor=pi*8;
  //Serial.println(valor);
  delay(1000);  
  

}
//zona de funciones
void holamundo(){
  String hola= "Hola mundo";
  Serial.println(hola);
}
