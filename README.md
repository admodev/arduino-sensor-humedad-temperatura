# Sensor de temperatura y humedad con Arduino Uno

## Requisitos

- 1 Sensor de temperatura y humedad DHT111 de 3 pines
- 3 Cables (uno para el positivo, otro para el negativo y otro para el output)
- Placa Arduino Uno R3

## Pasos

Cableado:

Conectaremos el cable negativo al GND (tierra) de nuestra placa, el positivo a 5V y el de en medio (OUT) al pin digital 8 de nuestra placa Arduino Uno.

Codigo:

Primero debemos instalar la libreria DHT11 que se encuentra dentro de la carpeta "lib", luego procedemos a verificar, compilar y subir el codigo que se encuentra dentro de la carpeta "src" a nuestro Arduino Uno (recomiendo usar la GUI de Arduino para este paso...) y finalmente usando la GUI abrimos un Serial Monitor y le seteamos un baud de 9600 para empezar a monitorear la temperatura.
