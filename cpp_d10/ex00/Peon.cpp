//
// Peon.cpp for azd in /home/debrau_c/cours/piscine/cpp_d10/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Fri Jan 13 14:35:41 2017 Carl DEBRAUWERE
// Last update Fri Jan 13 23:50:22 2017 Carl DEBRAUWERE
//

# include "Peon.hh"

Peon::Peon(const std::string s):Victim(s){
  std::cout << "Zog zog." << std::endl;
};
Peon::~Peon(){
  std::cout << "Bleuark..." << std::endl;
};
void Peon::getPolymorphed() const{
  std::cout << _name << " has been turned into a pink pony !" << std::endl;
};
