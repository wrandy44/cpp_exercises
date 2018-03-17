//
// AsteroKreog.hh for azd in /home/debrau_c/cours/piscine/cpp_d10/ex04
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Sat Jan 14 01:21:16 2017 Carl DEBRAUWERE
// Last update Sat Jan 14 03:31:06 2017 Carl DEBRAUWERE
//

#ifndef ASTERO_KREOG_HH
# define ASTERO_KREOG_HH
# include <string>
#include "IAsteroid.hh"
#include "IMiningLaser.hh"
# include "DeepCoreMiner.hh"
//#include "StripMiner.hh"
class AsteroKreog : public IAsteroid{
public:
  AsteroKreog();
  ~AsteroKreog();
  std::string beMined(IMiningLaser *p) const;
  std::string beMined(DeepCoreMiner *p) const;
  std::string beMined(StripMiner *p) const;
  virtual std::string getName() const;

};

#endif /* **/
