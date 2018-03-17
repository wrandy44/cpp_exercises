//
// main.cpp for zd in /home/debrau_c/cours/piscine/cpp_d07a/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 17:26:44 2017 Carl DEBRAUWERE
// Last update Wed Jan 11 01:14:42 2017 Carl DEBRAUWERE
//

#include <string>
#include <iostream>
#include "KreogCom.h"

int main(){
  KreogCom k(42, 42, 101010);
  k.addCom(56, 25, 65);
  k.addCom(73, 34, 51);
  k.locateSquad();
  k.removeCom();
  k.removeCom();
  return 0;
}
