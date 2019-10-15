#include "Movimento.h"

void Movimento::motoresFrente(){
  robo.acionarMotores(30,30);
}
void Movimento::motoresDir(){
  robo.acionarMotores(-35, 30);
}
void Movimento::motoresEsq(){
  robo.acionarMotores(30, -35);
}
void Movimento::motoresTras(){
  robo.acionarMotores(-30,-30);
}
void Movimento::motoresParem(){
  robo.acionarMotores(0,0);
}
void Movimento::superFrente(){
  robo.acionarMotores(55, 55);
}
void Movimento::girarEsq(){
  robo.acionarMotores(-25,25);
}
void Movimento::girarDir(){
  robo.acionarMotores(25,-25);
}
