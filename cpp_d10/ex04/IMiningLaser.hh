//
// IMiningLaser.hh for azd in /home/debrau_c/cours/piscine/cpp_d10/ex04
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Sat Jan 14 01:38:14 2017 Carl DEBRAUWERE
// Last update Sat Jan 14 01:54:23 2017 Carl DEBRAUWERE
//

#ifndef IMINING_LASER_HH
# define IMINING_LASER_HH

#include <string>
class IMiningLaser;
#include "IAsteroid.hh"

class IMiningLaser{

public:
  virtual ~IMiningLaser(){};
  virtual void mine(IAsteroid *) = 0;
};
#endif /* */
