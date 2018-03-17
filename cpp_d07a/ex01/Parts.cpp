//
// Parts.cpp for ad in /home/debrau_c/cours/piscine/cpp_d07a/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 19:01:24 2017 Carl DEBRAUWERE
// Last update Tue Jan 10 22:43:44 2017 Carl DEBRAUWERE
//

#include <iostream>
#include "Parts.h"

//
Arms::Arms(std::string serial, bool f){
  _serial = serial;
  _func = f;
}

Arms::~Arms(){

}

void Arms::informations() const{
  if (this->_func)
    std::cout << "\t[Parts] Arms " << this->_serial << " status : OK" <<std::endl;
  else
    std::cout << "\t[Parts] Arms " << this->_serial << " status : KO" <<std::endl;
}
//
Legs::Legs(std::string serial, bool f){
  _serial = serial;
  _func = f;
}

Legs::~Legs(){

}

void Legs::informations() const{
    if (this->_func)
    std::cout << "\t[Parts] Legs " << this->_serial << " status : OK" <<std::endl;
  else
    std::cout << "\t[Parts] Legs " << this->_serial << " status : KO" <<std::endl;
}

//

Head::Head(std::string serial, bool f){
  _serial = serial;
  _func = f;
}

Head::~Head(){

}

void Head::informations() const{
  if (this->_func)
    std::cout << "\t[Parts] Head " << this->_serial << " status : OK" <<std::endl;
  else
    std::cout << "\t[Parts] Head " << this->_serial << " status : KO" <<std::endl;
}
