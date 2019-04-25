#include "Sensores.h"

bool Sensores::viuObs(){
  return robo.lerSensorSonarFrontal() < DIST_SONAR;
}

bool Sensores::maisDirBranco(){return robo.lerSensorLinhaMaisDir() > maisDir.getCinza();}
bool Sensores::maisEsqBranco(){return robo.lerSensorLinhaMaisEsq() > maisEsq.getCinza();}
bool Sensores::dirBranco(){return robo.lerSensorLinhaDir() > dir.getCinza();}
bool Sensores::esqBranco(){return robo.lerSensorLinhaEsq() > esq.getCinza();}

bool Sensores::bbbb(){return (maisEsqBranco()) && (esqBranco()) && (dirBranco()) && (maisDirBranco());}
bool Sensores::pppp(){return (!maisEsqBranco()) && (!esqBranco()) && (!dirBranco()) && (!maisDirBranco());}
bool Sensores::bbpp(){return (maisEsqBranco()) && (esqBranco()) && (!dirBranco()) && (!maisDirBranco());}
bool Sensores::ppbb(){return (!maisEsqBranco()) && (!esqBranco()) && (dirBranco()) && (maisDirBranco());}

bool Sensores::bpbb(){return (maisEsqBranco()) && (!esqBranco()) && (dirBranco()) && (maisDirBranco());}
bool Sensores::bbpb(){return (maisEsqBranco()) && (esqBranco()) && (!dirBranco()) && (maisDirBranco());}
bool Sensores::bbbp(){return (maisEsqBranco()) && (esqBranco()) && (dirBranco()) && (!maisDirBranco());}
bool Sensores::pbbb(){return (!maisEsqBranco()) && (esqBranco()) && (dirBranco()) && (maisDirBranco());}

bool Sensores::pbpp(){return (!maisEsqBranco()) && (esqBranco()) && (!dirBranco()) && (!maisDirBranco());}
bool Sensores::ppbp(){return (!maisEsqBranco()) && (!esqBranco()) && (dirBranco()) && (!maisDirBranco());}
bool Sensores::pppb(){return (!maisEsqBranco()) && (!esqBranco()) && (!dirBranco()) && (maisDirBranco());}
bool Sensores::bppp(){return (maisEsqBranco()) && (!esqBranco()) && (!dirBranco()) && (!maisDirBranco());}

bool Sensores::pbbp(){return (!maisEsqBranco()) && (esqBranco()) && (dirBranco()) && (!maisDirBranco());}
bool Sensores::bppb(){return (maisEsqBranco()) && (!esqBranco()) && (!dirBranco()) && (maisDirBranco());}
bool Sensores::bpbp(){return (maisEsqBranco()) && (!esqBranco()) && (dirBranco()) && (!maisDirBranco());}
bool Sensores::pbpb(){return (!maisEsqBranco()) && (esqBranco()) && (!dirBranco()) && (maisDirBranco());}
