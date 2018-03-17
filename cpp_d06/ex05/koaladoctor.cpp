//
// koaladoctor.cpp for azd in /home/debrau_c/cours/piscine/cpp_d06/ex04
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Mon Jan  9 17:36:46 2017 Carl DEBRAUWERE
// Last update Mon Jan  9 18:43:07 2017 Carl DEBRAUWERE
//

#include <cstdlib>
#include <fstream>
#include "koaladoctor.h"

KoalaDoctor::KoalaDoctor(std::string name){
  this->name = name;
  this->work = 1;
  std::cout << "Dr. " << name << ": Je suis le Dr." << name << "! Comment Kreoggez-vous ?" << std::endl;
}

KoalaDoctor::~KoalaDoctor(){
}

void KoalaDoctor::diagnose(SickKoala *patient){
  std::cout << "Dr. " << this->name << ": Alors qu'est-ce qui vous goerk Mr." << patient->getName() << " ?" << std::endl;
  patient->poke();
  std::string drug[5] ={"mars", "Buronzand", "Viagra", "Extasy", "Eucalyptus leaf"};
  std::string nameP = patient->getName();
  std::ofstream fileO(std::string(nameP + ".report").c_str(), std::ios::out);
  fileO << drug[random() % 5];
}

void KoalaDoctor::timeCheck(){
  if (this->work)
    std::cout << "Dr." << this->name << ": Je commence le travail!" << std::endl;
  else if (this->work)
    std::cout << "Dr." << this->name << ": Je rentre dans ma foret d'eucalyptus!" << std::endl;
  this->work = !this->work;
}

std::string KoalaDoctor::getName(){
  return (this->name);
}
