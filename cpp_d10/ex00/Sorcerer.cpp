//
// Sorcerer.cpp for zad in /home/debrau_c/cours/piscine/cpp_d10/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Fri Jan 13 11:24:01 2017 Carl DEBRAUWERE
// Last update Fri Jan 13 11:59:32 2017 Carl DEBRAUWERE
//

#include <ostream>
#include <iostream>
#include "Sorcerer.hh"

Sorcerer::Sorcerer(const std::string &n, const std::string &t){
  _name = n;
  _title = t;
  std::cout << _name << ", " << _title << ", is born !" << std::endl;
}
Sorcerer::~Sorcerer(){
  std::cout << _name << ", " << _title << ", is dead. Consequences will never be the same !" << std::endl;
}

void Sorcerer::describe(std::ostream &flux){
  flux << "I am " << _name << ", "<< _title << ", and I like ponies !" << std::endl;
}

std::ostream &operator<<(std::ostream &flux, Sorcerer &Sor){
  Sor.describe(flux);
  return (flux);
}
