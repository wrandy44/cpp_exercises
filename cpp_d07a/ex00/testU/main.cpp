//
// main.cpp for zd in /home/debrau_c/cours/piscine/cpp_d07a/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 17:26:44 2017 Carl DEBRAUWERE
// Last update Tue Jan 10 18:22:49 2017 Carl DEBRAUWERE
//

#include <string>
#include <iostream>
#include "Skat.h"


int main()
{
  Skat s("Junior", 5);
  std::cout << "Soldier " << s.name() << std::endl;
  s.status();
  s.useStimPaks();
  return 0;
}
