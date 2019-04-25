#include "Estrategia.h"

void Estrategia::calibrar(){
  c.tempo();
}
void Estrategia::seguirLinha(){ //2 sensores
   
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
  }
}     
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
  

 
     
