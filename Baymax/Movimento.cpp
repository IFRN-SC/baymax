#include "Movimento.h"

void Movimento::motoresFrente(){
  robo.acionarMotores(30,30);
}

void Movimento::motoresDir(){
  robo.acionarMotores(30, -30);
}

void Movimento::motoresEsq(){
  robo.acionarMotores(-30,30);
}
void Movimento::motoresTras(){
  robo.acionarMotores(-30,-30);
}
