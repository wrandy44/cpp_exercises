//
// main.cpp for azd in /home/debrau_c/cours/piscine/cpp_d08/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Wed Jan 11 11:06:07 2017 Carl DEBRAUWERE
// Last update Wed Jan 11 17:29:06 2017 Carl DEBRAUWERE
//

#include <iostream>
#include "droid.hh"

int main(){
  Droid d;
  Droid d1("Avenger");

  size_t Durasel = 200;

  std::cout << d << std::endl;
  
  std::cout << d1 << std::endl;
  
  d = d1;
  d.setStatus(new std::string("Kill Kill Kill!"));
  d << Durasel;
  std::cout << d << "--" << Durasel << std::endl;
  Droid d2 = d;
  d.setId("Rex");
  std::cout << (d2 != d) << std::endl;
}
