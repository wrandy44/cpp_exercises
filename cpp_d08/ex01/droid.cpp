//
// droid.cpp for azd in /home/debrau_c/cours/piscine/cpp_d08/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Wed Jan 11 09:23:02 2017 Carl DEBRAUWERE
// Last update Wed Jan 11 23:14:21 2017 Carl DEBRAUWERE
//

#include <string>
#include <iostream>
#include "droid.hh"

Droid::Droid(std::string const n):_energy(50), _attack(25), _resist(15), _status(new std::string("Standing by")){
  _id = n;
  std::cout << "Droid '"<< _id << "' Activated" << std::endl;
}

Droid::Droid(const Droid& a):_attack(25), _resist(15){
  _id = std::string(a.getId());
  _energy = a.getEnergy();
  _status = new std::string(*a.getStatus());
  std::cout << "Droid '"<< _id << "' Activated, Memory Dumped" << std::endl;
}

Droid::~Droid(){
  std::cout << "Droid '" << _id << "' Destroyed" << std::endl;
  delete _status;
}

// getters
size_t Droid::getEnergy()const{return _energy;}
size_t Droid::getAttack()const{return _attack;}
size_t Droid::getToughness()const{return _resist;}
std::string *Droid::getStatus()const{return _status;}
std::string Droid::getId() const{return _id;}
// setters
void Droid::setEnergy(size_t s){_energy = s;}

void Droid::setStatus(std::string *s){
  _status = s;
}

void Droid::setId(std::string s){_id = s;}

void Droid::print(std::ostream &flux) const{
  flux << "Droid '"<<_id<<"', " << *_status <<", " << _energy;
}

Droid &Droid::operator=(Droid const& a){
  this->_id = a.getId();
  this->_status = new std::string(*a.getStatus());
  this->setEnergy(a._energy);
  return *this;
}

//operator

std::ostream &operator<<(std::ostream &flux, Droid const &d){
  d.print(flux);
  return flux;
}

Droid &operator<<(Droid &d, size_t &s)
{
  size_t t = d.getEnergy();
  size_t res = 100 - t;
  if ( s > res){
    s -= res;
    d.setEnergy(d.getEnergy() + res);
  }
  else{
    d.setEnergy(d.getEnergy() + res);
  }
  return d;
}

bool operator==(Droid const &a, Droid const &b){
  return (a.getStatus() == b.getStatus());
}

bool operator!=(Droid const &a, Droid const &b){
  return !( a == b );
}
