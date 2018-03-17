//
// koalanurse.cpp for azd in /home/debrau_c/cours/piscine/cpp_d06/ex03
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Mon Jan  9 12:43:53 2017 Carl DEBRAUWERE
// Last update Mon Jan  9 18:40:50 2017 Carl DEBRAUWERE
//

#include <iostream>
#include <fstream>
#include "koalanurse.h"

KoalaNurse::KoalaNurse(int x){
  this->id = x;
  this->work = false;
}

KoalaNurse::~KoalaNurse(){
  std::cout << "Nurse " << id << ": Enfin un peu de repos!" << std::endl;
}

void KoalaNurse::giveDrug(std::string d, SickKoala *patient){
  patient->takeDrug(d);
}

std::string KoalaNurse::readReport(std::string path){
  std::string verif = path.substr(path.rfind('.'));
  std::string name = path.substr(0, path.rfind('.'));
  if (verif == ".report")
    {
      std::ifstream file(path.c_str());
      if (file.is_open()){
	std::string str;
	file >> str;
	std::cout << "Nurse " << id << ": Kreog! Il faut donner un " << str << " a Mr. " << name << "!" << std::endl;
	return str;
      }
    }
  return std::string("");
}

void KoalaNurse::timeCheck(){
  if (this->work == false){
    std::cout << "Nurse " << this->id << ": Je commence le travail!" << std::endl;
  }
  else{
    std::cout << "Nurse " << this->id << ": Je rentre dans ma foret!" << std::endl;
  }
  this->work = !this->work;
}

int KoalaNurse::getID(){return (this->id);}
