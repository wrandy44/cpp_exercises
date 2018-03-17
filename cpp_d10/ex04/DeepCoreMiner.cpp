//
// DeepCoreMiner.cpp for azd in /home/debrau_c/cours/piscine/cpp_d10/ex04
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Sat Jan 14 02:52:02 2017 Carl DEBRAUWERE
// Last update Sat Jan 14 03:31:07 2017 Carl DEBRAUWERE
//

#include "DeepCoreMiner.hh"
DeepCoreMiner::DeepCoreMiner(){};
DeepCoreMiner::~DeepCoreMiner(){};

void DeepCoreMiner::mine(IAsteroid *s){
  std::cout << "* mining deep ... got "<< s->beMined(this)<<" ! *" << std::endl;
};
