#ifndef KOALA_STEROID_HH
# define KOALA_STEROID_HH
# include <string>
#include "IAsteroid.hh"
#include "IMiningLaser.hh"
# include "DeepCoreMiner.hh"
//#include "StripMiner.hh"
class KoalaSteroid : public IAsteroid{
public:
  KoalaSteroid();
  ~KoalaSteroid();
  std::string beMined(IMiningLaser *p) const;
  std::string beMined(DeepCoreMiner *p) const;
  std::string beMined(StripMiner *p) const;
  virtual std::string getName() const;

};

#endif /* **/
