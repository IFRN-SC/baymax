#ifndef ESTRATEGIA_H;
#define ESTRATEGIA_H;

#include <robo_hardware2.h>
#include "Refletancia.h"
#include "Movimento.h"
#include "Calibracao.h"




class Estrategia : Calibracao{
  private:
    Movimento movi;

  public:

//#include "Calibracao.h"


 // void executar();

  void seguirLinha(); 
  void calibrar();
  
  //void desviarObstaculo();

  //void virarVerde();

  //void sala3();
  
};
#endif
