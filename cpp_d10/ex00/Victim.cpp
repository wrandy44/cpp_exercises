//
// Victim.cpp for azd in /home/debrau_c/cours/piscine/cpp_d10/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Fri Jan 13 14:33:37 2017 Carl DEBRAUWERE
// Last update Fri Jan 13 14:34:15 2017 Carl DEBRAUWERE
//

#include <ostream>
#include "Victim.hh"

std::ostream &operator<<(std::ostream &flux, Victim &Vic){
  Vic.describe(flux);
  return flux;
}
