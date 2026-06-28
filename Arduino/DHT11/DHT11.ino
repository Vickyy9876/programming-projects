#include <Bonezegei_DHT11.h>

Bonezegei_DHT11 dht(A0);

int led = 7; // pin del LED

void setup() {

  Serial.begin(9600);

  dht.begin();

  pinMode(led, OUTPUT);
}

void loop() {

  if (dht.getData()) {

    float temperatura = dht.getTemperature();

    Serial.print("Temperatura: ");
    Serial.print(temperatura);

    Serial.print(" °C ");

    Serial.print("Humedad: ");
    Serial.print(dht.getHumidity());

    Serial.println(" %");

    // Encender LED si temperatura >= 27°C
    if (temperatura >= 27) {

      digitalWrite(led, HIGH);

    } else {

      digitalWrite(led, LOW);
    }
  }

  delay(500);
}
