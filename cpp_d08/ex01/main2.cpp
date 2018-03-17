//
// main.cpp for azd in /home/debrau_c/cours/piscine/cpp_d08/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Wed Jan 11 11:06:07 2017 Carl DEBRAUWERE
// Last update Wed Jan 11 22:40:23 2017 Carl DEBRAUWERE
//

#include <iostream>
#include "droid.hh"
#include "droidmemory.hh"

int main(){
  DroidMemory dm;
  DroidMemory dn;
  DroidMemory dg;
  dm += 42;
  DroidMemory dn1 = dm;
  std::cout << dm << std::endl;
  dn << dm;
  dn >> dm;
  dn << dm;
  std::cout << dn << std::endl;
  std::cout << dm << std::endl;
  dg = dm + dn1;
}
