//
// Character.cpp for aazd in /home/debrau_c/cours/piscine/cpp_d09/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Thu Jan 12 14:52:59 2017 Carl DEBRAUWERE
// Last update Thu Jan 12 18:25:49 2017 Carl DEBRAUWERE
//

#include <string>
#include <iostream>
#include "Character.hh"

//Character

Character::Character(const std::string &name, int level){
  _name = name;
  _lv = level;
  _power = 100;
  _maxPower = 100;
  _pv = 100;
  _maxPv = 100;
  _class = "Character";
  _race = "Koala";
  _carac = Characteristics(5, 5, 5, 5, 5);
  Range = Character::CLOSE;
  std::cout << _name << " Created" << std::endl;
}
Character::~Character(){}

const std::string Character::getName() const {return _name;}
size_t Character::getLvl() const { return _lv;}
size_t Character::getPower() const { return _power; }
size_t Character::getPv() const { return _pv;}

