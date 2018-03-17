#include "KoalaSteroid.hh"


KoalaSteroid::KoalaSteroid(){}
KoalaSteroid::~KoalaSteroid(){}
std::string KoalaSteroid::beMined(IMiningLaser *p) const{
  p = p; return "";
}
std::string KoalaSteroid::beMined(DeepCoreMiner *p) const{
  p = p; return "Zazium";
}
std::string KoalaSteroid::beMined(StripMiner *p) const{
  p = p;
  return "Koalite";
}
std::string KoalaSteroid::getName() const{ return "KoalaSteroid";};
