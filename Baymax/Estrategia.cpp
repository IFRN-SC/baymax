#include "Estrategia.h"

void Estrategia::calibrar(){
  sensor.tempo();
}
void Estrategia::seguirLinha(){ 
   
    if(sensor.bbbb()){ //bbbb
       movi.motoresFrente();
        
    }else if(sensor.pppp()){ //pppp
        movi.motoresFrente();    
    
    }else if(sensor.bbpp()){ //bbpp      
          movi.motoresDir();              
    
    }else if(sensor.ppbb()){ //ppbb
          movi.motoresEsq();
    
    }else if(sensor.bpbb()){    
        movi.motoresEsq();
            
    }else if(sensor.bbpb()){
        movi.motoresDir();
        
    }else if(sensor.bppb()){
       movi.motoresDir();
    
    }else if(sensor.bppp()){
        movi.motoresDir();
        
    }/*else if(sensor.pppb()){ //teste
      while(!sensor.maisEsqBranco()){
        movi.motoresEsq();
      } 
    }else if(sensor.bppp()){ //teste
      while(!sensor.maisDirBranco()){
        movi.motoresDir();
      }*/
    }
//}     
void Estrategia::desviarObs(){
    movi.motoresTras();
    delay(100);
    movi.motoresDir();
    delay(100);
    movi.motoresFrente();
    delay(100);
    movi.motoresEsq();
    delay(100);
    movi.motoresFrente();
    delay(100);
    movi.motoresEsq();
    delay(100);
    movi.motoresDir();
    delay(100);
    seguirLinha();
   
}  
void Estrategia::executar(){
 if(sensor.viuObs()){
    desviarObs();
  }else{
    seguirLinha();
  }
}
