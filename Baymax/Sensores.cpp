#include "Sensores.h"

bool Sensores::viuObstaculo(){
  

  
}

bool Sensores::maisDir(){return robo.lerSensorLinhaMaisDir() < refler.getCinza();}
bool Sensores::maisEsq(){return robo.lerSensorLinhaMaisEsq() < refler.getCinza();}
bool Sensores::dir(){return robo.lerSensorLinhaDir() < refler.getCinza();}
bool Sensores::esq(){return robo.lerSensorLinhaEsq() < refler.getCinza();}

bool Sensores()::bbbb(){return (refler()) && (refler()) && (refler()) && (refler());}
bool Sensores()::pppp(){return (refler()) && (refler()) && (refler()) && (refler());}
bool Sensores()::bbpp(){return (maisDir()) && (maisEsq()) && (dir()) && (esq());}
bool Sensores()::ppbb(){return (maisDir()) && (maisEsq()) && (dir()) && (esq());}

bool Sensores()::bpbb(){return (maisDir()) && (maisEsq()) && (dir()) && (esq());}
bool Sensores()::bbpb(){return (maisDir()) && (maisEsq()) && (dir()) && (esq());}
bool Sensores()::bbbp(){return (maisDir()) && (maisEsq()) && (dir()) && (esq());}
bool Sensores()::pbbb(){return (maisDir()) && (maisEsq()) && (dir()) && (esq());}

bool Sensores()::pbpp(){return (maisDir()) && (maisEsq()) && (dir()) && (esq());}
bool Sensores()::ppbp(){return (maisDir()) && (maisEsq()) && (dir()) && (esq());}
bool Sensores()::pppb(){return (maisDir()) && (maisEsq()) && (dir()) && (esq());}
bool Sensores()::bppp(){return (maisDir()) && (maisEsq()) && (dir()) && (esq());}

bool Sensores()::pbbp(){return (maisDir()) && (maisEsq()) && (dir()) && (esq());}
bool Sensores()::bppb(){return (maisDir()) && (maisEsq()) && (dir()) && (esq());}
bool Sensores()::bpbp(){return (maisDir()) && (maisEsq()) && (dir()) && (esq());}
bool Sensores()::pbpb(){return (maisDir()) && (maisEsq()) && (dir()) && (esq());}
