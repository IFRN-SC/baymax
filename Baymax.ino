#include <robo_hardware2.h>
#include "Refletancia.h"
#include "Movimento.h"
#include "Estrategia.h"
#include "Calibracao.h"

Estrategia estra;

void setup(){
	Serial.begin(9600);
	robo.configurar(false);
  estra.calibrar();
}

void loop(){
	/*Calibracao cali;

  cali.tempo();
  Serial.print("aeiou");
  while(1); */

  estra.seguirLinha();

}
