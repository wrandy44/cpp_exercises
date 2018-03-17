//
// Warrior.cpp for azd in /home/debrau_c/cours/piscine/cpp_d09/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Thu Jan 12 17:42:13 2017 Carl DEBRAUWERE
// Last update Fri Jan 13 01:12:19 2017 Carl DEBRAUWERE
//

#include "Warrior.hh"

Warrior::Warrior(const std::string &s, int level)
  :Character(s, level){
  _weaponName = "hammer";
  std::cout << "I'm " << _name << " KKKKKKKKKKRRRRRRRRRRRRRREEEEEEEEOOOOOOORRRRGGGGGGG" << std::endl;
  _carac = Characteristics(12, 12, 6, 5, 7);
}

Warrior::~Warrior(){

}
