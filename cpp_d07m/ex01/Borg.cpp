//
// Borg.cpp for zda in /home/debrau_c/cours/piscine/cpp_d07m/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 12:22:37 2017 Carl DEBRAUWERE
// Last update Tue Jan 10 14:22:32 2017 Carl DEBRAUWERE
//

#include <iostream>
#include "Borg.hh"

Borg::Ship::Ship(){
  _side = 300;
  _maxWrap = 0;
  std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally." << std::endl << "Your biological characteristics and technologies will be assimilated." << std::endl << "Resistance is futile." << std::endl;
}

Borg::Ship::~Ship(){}

void Borg::Ship::setupCore(WarpSystem::Core *c){
  this->_core = c;
}
void Borg::Ship::checkCore(){
  if (this->_core->checkReactor()->isStable())
    std::cout << "Everything is in order." << std::endl;
  else if (!this->_core->checkReactor()->isStable())
    std::cout << "Critical failure imminent." << std::endl;
}
