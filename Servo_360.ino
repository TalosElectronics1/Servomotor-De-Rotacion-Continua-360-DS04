/*
  Talos Electronics 2016
  Tgo Rafael Lozano
  Servomotor De Rotación Continúa 360° DS04
*/

#include <Servo.h> //Incluir la libreria para servos
//Delcaracion de variables
int Pot = 0;// pin analógico utilizado para conectar el potenciómetro
int valor;// variable para leer el valor del pin analogico
Servo Servo_360;//Crear el objeto Servo_360 para controlar el servo
 
void setup() 
{ 
  Servo_360.attach(2);// Definir el pin 2 para el servo
} 
 
void loop() 
{ 
  valor = analogRead(Pot);//Leer el valor del potenciometro 
  valor = map(valor, 0, 1023, 0, 179);//Escala para utilizarlo con el servo 
  Servo_360.write(valor);//Establece la posición del servo de acuerdo al valor
  delay(15);//Espera a que el servo llegue
} 


