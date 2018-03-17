//
// IAsteroid.hh for azd in /home/debrau_c/cours/piscine/cpp_d10/ex04
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Sat Jan 14 01:18:23 2017 Carl DEBRAUWERE
// Last update Sat Jan 14 03:23:57 2017 Carl DEBRAUWERE
//

#ifndef IASTEROID_HH
# define IASTEROID_HH

# include <string>
class IAsteroid;
class DeepCoreMiner;
class StripMiner;
# include "IMiningLaser.hh"

class IAsteroid{
public:
  virtual ~IAsteroid(){};
  virtual std::string beMined(IMiningLaser *) const = 0;
  virtual std::string beMined(DeepCoreMiner *) const = 0;
  virtual std::string beMined(StripMiner *)const  = 0;

  virtual std::string getName() const = 0;
  
};
#endif /** **/
