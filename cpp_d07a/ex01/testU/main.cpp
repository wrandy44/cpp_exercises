//
// main.cpp for zd in /home/debrau_c/cours/piscine/cpp_d07a/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 17:26:44 2017 Carl DEBRAUWERE
// Last update Tue Jan 10 22:40:29 2017 Carl DEBRAUWERE
//

#include <string>
#include <iostream>
#include "KoalaBot.h"

int main(){
  KoalaBot kb;
  Arms a1("coucou",false);
  Head a2;
  Legs a3;
  
  kb.swapParts(a1);
  std::cout << std::boolalpha << kb.status() << std::endl;
  kb.informations();
  return 0;
}
