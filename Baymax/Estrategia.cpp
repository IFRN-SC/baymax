#include "Estrategia.h"

void Estrategia::calibrar(){
  sensor.tempo();
}
void Estrategia::seguirLinha(){ 
  
    if(sensor.bbbb()){ //bbbb
       movi.motoresFrente();
    }
    else if(sensor.pppp()){ //pppp
      movi.motoresFrente();    
    }
    else if(sensor.bbpp()){ //bbpp      
       movi.motoresDir();
       delay(150);              
    }
    else if(sensor.ppbb()){ //ppbb
        movi.motoresEsq();
        delay(150);
    }
    else if(sensor.bpbb()){    
        movi.motoresEsq();
    }
    else if(sensor.bbpb()){
        movi.motoresDir();    
    }
    else if(sensor.bppb()){   
       movi.motoresFrente();
    }
    else if(sensor.bppp()){
        while (!sensor.bbbb()) {
           movi.motoresFrente ();   
       }
       while (!sensor.maisDirBranco()) {
           movi.motoresEsq();   
       }
       while (sensor.maisDirBranco()) {
           movi.motoresEsq();   
       }
        
    }else if(sensor.pppb()){ //teste
       while (!sensor.bbbb()) {
           movi.motoresFrente ();   
       }
       while (!sensor.maisEsqBranco()) {
           movi.motoresDir();   
       }
       while (sensor.maisEsqBranco()) {
           movi.motoresDir();   
       }
    }
}     
void Estrategia::desviarObs(){ //ajeitar delays
  movi.motoresTras();
  delay(150);
  movi.girarEsq90();
  movi.motoresFrente();
  delay(500);
  movi.motoresParem();
  delay(500); 
  while(sensor.bbbb() || sensor.pbbb() || sensor.ppbb()){
    movi.motoresTras();
 }
  movi.motoresParem();
  delay(500);
  
  while(sensor.ppbb()|| sensor.pppb()){
    robo.acionarMotores(0, 30);
 }  
  movi.motoresFrente();
  delay(1150);  movi.motoresParem();
  delay(500);
  movi.girarDir90();
  movi.motoresParem();
  delay(500);
  movi.motoresFrente();
  delay(1300);
  movi.motoresParem();
  delay(500);
  movi.girarDir90();
  movi.motoresTras();
  delay(150);
  
  while(sensor.bbbb()){
    movi.motoresFrente();
  }
 
  movi.motoresFrente();
  delay(200);
  movi.girarEsq90();
  movi.motoresTras();
  delay(90);
  while(sensor.dirBranco())
  {
    movi.motoresEsq();  //VIRA DIR (CASO PRECISE)
  }
  movi.motoresDir();    //VIRA ESQ (CASO PRECISE)
  delay(100);
  seguirLinha();
   
}
void Estrategia::redutor(){
   robo.ligarLed(1);

  movi.superFrente();
  delay(300);
  
  movi.motoresTras();
  delay(300);
  
  movi.superFrente();
  delay(500);

  movi.motoresParem();
  delay(300);

  while(!sensor.bbbb()){
    movi.motoresFrente();
  }
  while (sensor.bbbb() || sensor.bbpp() || sensor.bbbp()) {
    movi.motoresTras();
  }
  seguirLinha();  
}
void Estrategia::executar(){
 if(sensor.viuObs()){
    desviarObs();
  }else if(digitalRead(28) == LOW){
    redutor();
  }else{  
    seguirLinha();
  }
}
