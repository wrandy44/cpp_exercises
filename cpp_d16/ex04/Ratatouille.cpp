/*
** Ratatouille.cpp for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
// Last update Thu Jan 19 22:58:20 2017 Carl DEBRAUWERE
*/

#include "Ratatouille.h"
  // Canonical class

Ratatouille::Ratatouille(){

}
Ratatouille::Ratatouille(Ratatouille const &a){
  this->_flux << a._flux.str();
}
Ratatouille::~Ratatouille(){
}
Ratatouille &Ratatouille::operator=(const Ratatouille &d){
  this->_flux.clear();
  this->_flux.str("");
  this->_flux << d._flux.str();
  return *this;
}
// Member functions allowing to add ingredients in the cooking pot
Ratatouille &Ratatouille::addVegetable(unsigned char d){
  _flux << d;
  return *this;
}
Ratatouille &Ratatouille::addCondiment(unsigned int d){
  _flux << d;
  return *this;
}
Ratatouille &Ratatouille::addSpice(double d){
  _flux << d;
  return *this;
}
Ratatouille &Ratatouille::addSauce(const std::string &s){
  _flux << s;
  return *this;
}
// The member function to extract the dish.
// The result will be the concatenation of all the added ingredients.
std::string Ratatouille::kooc(void){
  return _flux.str();
}
