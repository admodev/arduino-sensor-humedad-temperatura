#include <dht11.h>
#define DHT11_PIN 8

dht11 DHT11;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println();

  int chk = DHT11.read(DHT11_PIN);

  if (DHT11.humidity > 45)
  {
    Serial.println("CUIDADO: La humedad esta por encima del 45% Tal vez deberia usar un deshumidificador.");
  }

  if (DHT11.temperature >= 25)
  {
    Serial.println("CUIDADO: La temperatura es alta, quiza quiera encender el aire acondicionado.");
  }

  Serial.print("Humedad: ");
  Serial.print((float)DHT11.humidity, 2);
  Serial.print(" %");

  Serial.println();

  Serial.print("Temperatura: ");
  Serial.print((float)DHT11.temperature, 2);
  Serial.print(" C");

  delay(5000);
}
