//
// main.cpp for azd in /home/debrau_c/cours/piscine/cpp_d07m/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 12:07:30 2017 Carl DEBRAUWERE
// Last update Tue Jan 10 16:44:23 2017 Carl DEBRAUWERE
//

#include "WarpSystem.hh"
#include "Federation.hh"
#include "Borg.hh"

int main(void){
  Federation::Starfleet::Ship UssKreog(289, 132, "Kreog", 6);
  Federation::Ship carl(289, 132, "Carl");
  Federation::Starfleet::Captain James("James T. Kirk");
  Federation::Starfleet::Ensign Ensign("Pavel Chekov");
  WarpSystem::QuantumReactor QR;
  WarpSystem::QuantumReactor QR2;
  WarpSystem::Core core(&QR);
  WarpSystem::Core core2(&QR2);
  UssKreog.setupCore(&core);
  UssKreog.checkCore();
  carl.setupCore(&core);
  carl.checkCore();
  UssKreog.promote(&James);
  Borg::Ship Cube;
  Cube.setupCore(&core2);
  Cube.checkCore();

  return 0;
}
