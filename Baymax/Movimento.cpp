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
  robo.acionarMotores(45, 45);
}
void Movimento::girarEsq(){
  robo.acionarMotores(-30,30);
}
void Movimento::girarDir(){
  robo.acionarMotores(30,-30);
}
void Movimento::girarDir90(){
  robo.acionarMotores(30, -30);
  delay(600);
}
void Movimento::girarEsq90(){
  robo.acionarMotores(-30, 30);
  delay(600);
}
