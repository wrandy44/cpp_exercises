//
// AsteroKreog.cpp for azd in /home/debrau_c/cours/piscine/cpp_d10/ex04
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Sat Jan 14 01:21:28 2017 Carl DEBRAUWERE
// Last update Sat Jan 14 03:26:26 2017 Carl DEBRAUWERE
//

#include <string>
#include "AsteroKreog.hh"

AsteroKreog::AsteroKreog(){
}
AsteroKreog::~AsteroKreog(){
}

std::string AsteroKreog::beMined(IMiningLaser *p) const{
  p = p;
  std::cout << "ici" << std::endl;
  return "";
  }
std::string AsteroKreog::beMined(DeepCoreMiner *p) const{
  p = p;
  return "Sullite";
}
std::string AsteroKreog::beMined(StripMiner *p) const{
  p = p;
  return "Kreogium";
}
std::string AsteroKreog::getName() const{ return "AsteroKreog" ;}
