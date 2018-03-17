//
// Borg.cpp for zda in /home/debrau_c/cours/piscine/cpp_d07m/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 12:22:37 2017 Carl DEBRAUWERE
// Last update Tue Jan 10 17:52:22 2017 Carl DEBRAUWERE
//

#include <iostream>
#include "Borg.hh"

Borg::Ship::Ship(){
  _side = 300;
  _maxWarp = 9;
  _home = _location = UNICOMPLEX;
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

bool Borg::Ship::move(int warp, Destination d){
  Destination save;
  save = this->_location;
  this->_location = d;
  if (warp <= _maxWarp && d != _location) return true;
  if (_core->checkReactor()->isStable() == true) return true;
  _location = save;
  return false;
}
bool Borg::Ship::move(int warp){
  Destination save;
  save = this->_location;
  this->_location = _home;
  if (warp <= _maxWarp) return true;
  if (_core->checkReactor()->isStable() == true) return true;
  _location = save;
  return false;
}
bool Borg::Ship::move(Destination d){
  Destination save;
  save = this->_location;
  this->_location = d;
  if (_core->checkReactor()->isStable() == true) return true;
  if (d != _location) return true;
  _location = save;
  return false;
}
bool Borg::Ship::move(){
  Destination save;
  save = this->_location;
  this->_location = _home;
  if (_core->checkReactor()->isStable() == true) return true;
  _location = save;
  return false;
}
