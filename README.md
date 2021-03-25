# UltraTheremin
Arduino Ultrasonic Theremin es un proyecto para fabricar un theremin mediante el sensor de ultrasonidos HC-SR04, una placa arduino UNO y un altavoz.

### Materiales 📋

_Lista de la compra..._

1 x Arduino UNO (https://amzn.to/39g2epA)<br>
1 x Sensor de distancia por ultrasonidos HC-SR04 (https://amzn.to/2Punu3B)<br>
1 x Cables dupont hembra-macho (https://amzn.to/39dKhYG)<br>
1 x Altavoz 1w y 8 ohmnios (https://amzn.to/3sllgCo)<br>

_Para imprimir... 📦_

1 x Arduino UNO Case (https://www.thingiverse.com/thing:846684) <br>
1 x Ultrasonic Sensor Housing (https://www.thingiverse.com/thing:1708627) <br>

### CODE 🔧

_Inicialmente se ha pensado como un instrumento facil de usar y que no requiera contacto físico. Por estos motivos se utiliza el sensor de distancia por ultrasonidos y las escalas preconfiguradas_

_Cambios de escala - Descomentar la escala actual y comentar la escala deseada_

```
//int notas[]={NOTE_A4,NOTE_B4,NOTE_C5,NOTE_D5,NOTE_E5,NOTE_F5,NOTE_G5,NOTE_A5}; // Escala LA menor
//int notas[]={NOTE_C4,NOTE_D4,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_A4,NOTE_B4,NOTE_C5}; // Escala Do mayor
```

_Ajustes en distancias de detección y cantidad de notas_

```
int limiteInferior = 5;
int limiteSuperior = 45;
int cantidadNotas = 8;
```

## Construido con 🛠️

_Software utilizado_

* [Arduino IDE](https://www.arduino.cc/en/software/) - IDE de desarrollo oficial de ARDUINO


## Contribuyendo 🖇️

Por favor lee el [CONTRIBUTING.md](https://gist.github.com/villanuevand/xxxxxx) para detalles de nuestro código de conducta, y el proceso para enviarnos pull requests.

## Licencia 📄

Mira el archivo [LICENSE.md](LICENSE.md) para detalles

## Thanks! 🎁

* Gracias por el código inicial a Aquiles Vaesa (https://www.aquilesvaesa.com/) 📢
* Gracias al MakeSpace y al FabLab de Mallorca por su apoyo constante 🤓.

---
