//
// droidmemory.cpp for azd in /home/debrau_c/cours/piscine/cpp_d08/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Wed Jan 11 20:27:27 2017 Carl DEBRAUWERE
// Last update Wed Jan 11 23:27:59 2017 Carl DEBRAUWERE
//

#include <stdlib.h>
#include "droidmemory.hh"

DroidMemory::DroidMemory():_exp(0),_fingerPrint(random()){
}

DroidMemory::~DroidMemory(){
}

size_t	DroidMemory::getExp() const {return _exp;}
size_t DroidMemory::getFingerPrint()const {return _fingerPrint;}

void DroidMemory::setExp(size_t n){_exp = n;}
void DroidMemory::setFingerPrint(size_t n){_fingerPrint = n;}

void DroidMemory::print(std::ostream &f) const{
  f << "DroidMemory '" << _fingerPrint << "', " << _exp;
}

DroidMemory	&operator<<(DroidMemory &a, DroidMemory const &b){
  a.setExp(b.getExp() + a.getExp());
  return a;
}

DroidMemory	&operator>>(DroidMemory const &a, DroidMemory &b){
  b << a;
  return b;
}

DroidMemory	&operator+=(DroidMemory &a, DroidMemory const &b){
  a << b;
  return a;
}
DroidMemory	&operator+=(DroidMemory &a, size_t const &b){
  a.setExp(a.getExp() + b);
  return a;
}

DroidMemory	&operator+(DroidMemory const &a, DroidMemory const &b){
  DroidMemory *res = new DroidMemory();
  size_t l = a.getExp() + b.getExp();
  res->setExp(l);
  return *(res);
}

bool	operator||(DroidMemory const &a, DroidMemory const &b){
  return (a.getExp() || b.getExp());
}

std::ostream &operator<<(std::ostream &flux, DroidMemory const &d){
  d.print(flux);
  return flux;
}
