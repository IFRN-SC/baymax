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
  movi.motoresParem();
  delay(5000);
  robo.ligarLed(3);
  delay(2000);
  
 /* movi.girarDir();
  delay(350);
  movi.motoresParem(); 
  while(!sensor.pppp()){
    movi.motoresTras();
 }
  movi.motoresParem();
  while(sensor.ppbb()|| sensor.pppb()){
    robo.acionarMotores(0, 50);
 }  
  movi.motoresFrente();
  delay(1300);
  movi.motoresEsq();
  delay(300);
  robo.acionarMotores(30,43);
  delay(1500);
  movi.motoresEsq();
  delay(300);
  while(sensor.bbbb()){
    movi.motoresFrente();
  }
  movi.motoresFrente();
  delay(300);
  movi.motoresDir();
  delay(300);
  movi.motoresTras();
  delay(90);  
}*/
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
      /*if(digitalRead(28) == LOW){
        redutor();
      }*/
    redutor();
  }else{  
    seguirLinha();
  }
}
