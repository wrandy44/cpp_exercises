//
// main.cpp for zd in /home/debrau_c/cours/piscine/cpp_d07a/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 17:26:44 2017 Carl DEBRAUWERE
// Last update Wed Jan 11 03:39:23 2017 Carl DEBRAUWERE
//

#include <string>
#include <iostream>

# include "Sounds.h"
# include "Phaser.h"
  const std::string Sounds::Regular= "boom";
  const std::string Sounds::Plasma= "biom";
  const std::string Sounds::Rocket= "baom";

int main(){
  Phaser p(5, Phaser::ROCKET);
  p.fire();
  p.fire();
  p.changeType(Phaser::PLASMA);
  p.fire();
  p.fire();
  p.fire();
  p.fire();
  p.fire();
  p.fire();
  p.fire();
  p.fire();
  p.fire();
  p.fire();
  p.fire();
  
  std::cout << "Ammo : " << p.getCurrentAmmos() << std::endl;
  p.reload();
  std::cout << "Ammo : " << p.getCurrentAmmos() << std::endl;
  std::cout << "Firing all ammunitions" << std::endl;
  
  while (p.getCurrentAmmos() > 0)
    p.fire();
  return 0;
}
