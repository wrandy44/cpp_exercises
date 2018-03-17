//
// sickkoala.cpp for zda in /home/debrau_c/cours/piscine/cpp_d06/ex02
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Mon Jan  9 11:13:09 2017 Carl DEBRAUWERE
// Last update Mon Jan  9 20:03:43 2017 Carl DEBRAUWERE
//

#include <iostream>
#include "sickkoala.h"

static std::string my_lower(std::string f){
  for (size_t i = 0; i < f.size(); i++){
    if (f[i] >= 'A' && f[i] <= 'Z') f[i] = f[i] - 'A' + 'a';
  }
  return (f);
}

SickKoala::SickKoala(std::string name){
  this->name=name;
}

SickKoala::~SickKoala(){
  std::cout << "Mr. " << this->name << ": Kreooogg!! Je suis gueriiii!" << std::endl;
}

void SickKoala::poke(){
  std::cout << "Mr. " << this->name << ": Gooeeeeerrk!! :'(" << std::endl;
}

bool SickKoala::takeDrug(std::string p){
  if (my_lower(p) == "mars"){
    std::cout << "Mr. " << this->name << ": Mars, et ca kreog!" << std::endl;
    return true;
  }
  else if (p == "Buronzand"){
    std::cout << "Mr. " << this->name << ": Et la fatigue a fait son temps!" << std::endl;
    return true;
  }
  std::cout << "Mr. " << this->name << ": Goerkreog!" << std::endl;
  return false;
}

void SickKoala::overDrive(std::string a){
  size_t x;
  while ((x = a.find("Kreog!")) != std::string::npos){
    a.replace(x, std::string("Kreog!").length(), "1337!");
  }
  std::cout << "Mr. " << this->name << ": "<< a << std::endl;
}
