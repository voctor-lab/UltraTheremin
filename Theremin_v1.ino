#include "frecuencias.h"
#define MIN_DISTANCIA 50

int echo = 2;     // Pin para echo                          
int trigger = 3; // Pin para trigger                               
int speaker = 9; // Pin para el buzzer
unsigned long tiempoRespuesta;
unsigned long distancia;
int limiteInferior = 5;
int limiteSuperior = 45;
int cantidadNotas = 8;
//int cantidadNotas = 13;
//int notas[]={NOTE_C5,NOTE_CS5,NOTE_E5,NOTE_F5,NOTE_G5,NOTE_GS5,NOTE_B5,NOTE_C6}; //Escala doble armonica
//int notas[]={NOTE_E4,NOTE_F4,NOTE_GS4,NOTE_A4,NOTE_B4,NOTE_C4,NOTE_D4,NOTE_E5}; //Escala judia
//int notas[]={NOTE_C4,NOTE_CS4,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_GS4,NOTE_AS4,NOTE_C5}; // Escala española
int notas[]={NOTE_C4,NOTE_DS4,NOTE_F4,NOTE_FS4,NOTE_G4,NOTE_AS4,NOTE_C5,NOTE_DS5}; // Escala blues DO
//int notas[]={NOTE_A4,NOTE_B4,NOTE_C5,NOTE_D5,NOTE_E5,NOTE_F5,NOTE_G5,NOTE_A5}; // Escala LA menor
//int notas[]={NOTE_C4,NOTE_D4,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_A4,NOTE_B4,NOTE_C5}; // Escala Do mayor
//int notas[]={NOTE_C4,NOTE_CS4,NOTE_D4,NOTE_DS4,NOTE_E4,NOTE_F4,NOTE_FS4,NOTE_G4,NOTE_GS4,NOTE_A4,NOTE_AS4,NOTE_B4,NOTE_C5}; //Escala cromatica
//int notas[]={NOTE_C4,NOTE_D4,NOTE_E4,NOTE_F4,NOTE_G4,NOTE_A4,NOTE_B4,NOTE_C5,NOTE_D5}; //Escala natural
//int notas[]={NOTE_B3,NOTE_E4,NOTE_FS4,NOTE_G4,NOTE_A4}; //Escala Jedi


void setup() {
  pinMode(speaker, OUTPUT);                  
  pinMode(trigger, OUTPUT);                     
  pinMode(echo, INPUT);   
  Serial.begin(9600);                 
 } 

void loop() {
  digitalWrite(trigger, HIGH);            // Enviamos pulso de 10 microsegundos
  delayMicroseconds(10);                        
  digitalWrite(trigger, LOW);                   
  tiempoRespuesta = pulseIn(echo, HIGH);  // Y esperamos pulso de vuelta
  distancia = tiempoRespuesta/58;         // Calculo de distancia en cm
  Serial.println("Distancia: ");
  Serial.println(distancia);
  
  if (distancia >= limiteInferior && distancia <= limiteSuperior) {
    int x=map(distancia,limiteInferior,limiteSuperior,0,((cantidadNotas-1)*10));
    tone(speaker, notas[x/10]);
    delay(100);
  
  }  
  else{
    noTone(9);
    }
   
}
