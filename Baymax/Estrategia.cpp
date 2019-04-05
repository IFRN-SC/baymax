#include "Estrategia.h"

/*void Estrategia::executar(){
  if(sonar < distancia){
    contornarObstaculo();    
  }
  else{
    seguirLinha();  
  }
}*/
void Estrategia::calibrar(){
  tempo();
}
void Estrategia::seguirLinha(){ //2 sensores
   
  if(robo.lerSensorLinhaEsq() > esq.getCinza()  &&  
     robo.lerSensorLinhaDir() > dir.getCinza()){ //bb
     movi.motoresFrente(); 
  }
    else if(robo.lerSensorLinhaEsq() < esq.getCinza()  && 
            robo.lerSensorLinhaDir() < dir.getCinza()){ //pp
            movi.motoresFrente();    
    }
    else if(robo.lerSensorLinhaEsq() > esq.getCinza()  && 
            robo.lerSensorLinhaDir() < dir.getCinza() ){ //bp
            movi.motoresDir();          
    }
    else if(robo.lerSensorLinhaEsq() < esq.getCinza()  && 
            robo.lerSensorLinhaDir() > dir.getCinza()){ //pb
              movi.motoresEsq();
     }
    
  /*if(robo.lerSensorLinhaMaisEsq() > maisEsq.getCinza() && 
     robo.lerSensorLinhaEsq() > esq.getCinza() && 
     robo.lerSensorLinhaDir() > dir.getCinza() && 
     robo.lerSensorLinhaMaisDir() > maisDir.getCinza(){ //bbbb

      movimento.motoresFrente();
}
  else if(robo.lerSensorLinhaMaisEsq() > maisEsq.getCinza() &&
          robo.lerSensorLinhaEsq() < esq.getCinza() && 
          robo.lerSensorLinhaDir() > dir.getCinza() && 
          robo.lerSensorLinhaMaisDir() > maisDir.getCinza()){ //bpbb
    
    movimento.motoresEsq();   
  } 
  else if(robo.lerSensorLinhaMaisEsq() > SEPARACAO_BRANCO_PRETO &&
          robo.lerSensorLinhaEsq() > SEPARACAO_BRANCO_PRETO && 
          robo.lerSensorLinhaDir() < SEPARACAO_BRANCO_PRETO && 
          robo.lerSensorLinhaMaisDir() > SEPARACAO_BRANCO_PRETO){ //bbpb
    
    movimento.motoresDir();        
  } 
     else if(robo.lerSensorLinhaMaisEsq() < SEPARACAO_BRANCO_PRETO &&
            robo.lerSensorLinhaEsq() < SEPARACAO_BRANCO_PRETO && 
            robo.lerSensorLinhaDir() < SEPARACAO_BRANCO_PRETO && 
            robo.lerSensorLinhaMaisDir() < SEPARACAO_BRANCO_PRETO){ //pppp
  
      movimento.motoresFrente();
    }
    else if(robo.lerSensorLinhaMaisEsq() > SEPARACAO_BRANCO_PRETO &&
            robo.lerSensorLinhaEsq() > SEPARACAO_BRANCO_PRETO && 
            robo.lerSensorLinhaDir() < SEPARACAO_BRANCO_PRETO && 
            robo.lerSensorLinhaMaisDir() < SEPARACAO_BRANCO_PRETO){ //bbpp
  
              movimento.motoresDir();
    }
    else if(robo.lerSensorLinhaMaisEsq() < SEPARACAO_BRANCO_PRETO &&
          robo.lerSensorLinhaEsq() < SEPARACAO_BRANCO_PRETO && 
          robo.lerSensorLinhaDir() > SEPARACAO_BRANCO_PRETO && 
          robo.lerSensorLinhaMaisDir() > SEPARACAO_BRANCO_PRETO){ //ppbb

            movimento.motoresEsq();
    }*/
}
 
     
