//
// DeepCoreMiner.hh for azd in /home/debrau_c/cours/piscine/cpp_d10/ex04
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Sat Jan 14 01:41:14 2017 Carl DEBRAUWERE
// Last update Sat Jan 14 03:31:08 2017 Carl DEBRAUWERE
//

#ifndef DEEPCORE_MINER_HH
# define DEEPCORE_MINER_HH

#include <iostream>
# include "IMiningLaser.hh"
class DeepCoreMiner : public IMiningLaser{
public:
  DeepCoreMiner();
  ~DeepCoreMiner();
  virtual void mine(IAsteroid *);
};
#endif /* */
