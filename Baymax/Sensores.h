#ifndef SENSORES_H
#define SENSORES_H

#include <robo_hardware2.h>

#include "Refletancia.h"
#include "Movimento.h"
#include "Calibracao.h"

class Sensores:public Calibracao {
  private:
    Refletancia refler;
  public:
    bool viuObstaculo();
    
    bool maisDir();
    bool maisEsq();
    bool dir();
    bool esq();

    bool bbbb();
    bool pppp();
    bool bbpp();
    bool ppbb();
    
    bool bpbb();
    bool bbpb();
    bool bbbp();
    bool pbbb();
    
    
    bool pbpp();
    bool ppbp();
    bool pppb();
    bool bppp();

    
    
    bool pbbp();
    bool bppb();
    bool bpbp();
    bool pbpb();
  
};
#endif

