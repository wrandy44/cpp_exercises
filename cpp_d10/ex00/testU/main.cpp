//
// main.cpp for ad in /home/debrau_c/cours/piscine/cpp_d10/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Fri Jan 13 11:28:10 2017 Carl DEBRAUWERE
// Last update Fri Jan 13 14:26:39 2017 Carl DEBRAUWERE
//

#include <iostream>
#include <string>

#include "Sorcerer.hh"
#include "Victim.hh"
#include "Peon.hh"
/*
void transi(){
  std::cout << "***************" << std::endl;
}
void expected(std::string s){
  std::cout << "Expected   :" << s << std::endl;
}
void your(){
  std::cout << "Your       :";
}
int main(){
  expected("Nicolas, Le Magnifique, is born !");  
  your();
  Sorcerer _n("Nicolas", "Le Magnifique");

  transi();
  expected("I am Nicolas, Le Magnifique, and I like ponies !");
  your();
  std::cout << _n;


  transi();
  expected("Some random victim called Victor just popped !");
  your();
  Victim *_vic = new Victim("Victor");

  transi();
  expected("I'm Victor and i like otters !");
  your();
  std::cout << *_vic;
  
  transi();
  expected("Victim Victor just died for no apparent reason !");
  your();
  delete _vic;
  transi();
  expected("Nicolas, Le Magnifique, is dead. Consequences will never be the same !");
  your();
  return 0;
  }*/

int main()
{

    Sorcerer robert("Robert", "the Magnificent");
     Victim jim("Jimmy");
     Peon joe("Joe");
 
    std::cout << robert << jim << joe;
     robert.polymorph(jim);
     robert.polymorph(joe);
 
    return 0;
}
