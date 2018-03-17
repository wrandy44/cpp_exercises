//
// main.cpp for azad in /home/debrau_c/cours/piscine/cpp_d06/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Mon Jan  9 09:20:18 2017 Carl DEBRAUWERE
// Last update Mon Jan  9 20:04:57 2017 Carl DEBRAUWERE
//

#include <iostream>
#include <iomanip>
#include <string>
#include "sickkoala.h"
#include "koalanurse.h"

int main(){
  SickKoala jean("Jean");
  KoalaNurse nurse(1);
  
  jean.poke();
  jean.takeDrug("no_drug");
  jean.overDrive("coucou Kreog! c'est moi Kreog comment va Kreog ?");
  nurse.giveDrug("zdazdaz", &jean);
  nurse.readReport("salut.report");
  nurse.timeCheck();
}
