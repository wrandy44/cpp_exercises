//
// main.cpp for azad in /home/debrau_c/cours/piscine/cpp_d06/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Mon Jan  9 09:20:18 2017 Carl DEBRAUWERE
// Last update Mon Jan  9 20:14:04 2017 Carl DEBRAUWERE
//

#include <iostream>
#include <iomanip>
#include <string>
#include <cstdlib>
#include <ctime>
#include "sickkoala.h"
#include "koalanurse.h"
#include "koaladoctor.h"

int main(){
  SickKoala jean("Jean");
  KoalaNurse nurse(1);
  KoalaDoctor doc("Doc1");
  srandom(time(NULL));
  /*
  jean.poke();
  jean.takeDrug("no_drug");
  jean.overDrive("coucou Kreog c'est moi Kreog comment va Kreog ?");
  nurse.giveDrug("zdazdaz", &jean);
  nurse.readReport("salut.report");
  nurse.timeCheck();*/
  doc.diagnose(&jean);
  doc.timeCheck();
  std::string str = nurse.readReport("Jean.report");
  nurse.giveDrug(str, &jean);
}
