//
// Skat.cpp for ad in /home/debrau_c/cours/piscine/cpp_d07a/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 17:23:30 2017 Carl DEBRAUWERE
// Last update Tue Jan 10 22:33:01 2017 Carl DEBRAUWERE
//

#include <iostream>
#include <string>
#include "Skat.h"

Skat::Skat(std::string const &n , int sp):_name(n), _stimPaks(sp){
}
Skat::~Skat(){
}

int &Skat::stimPaks(){return _stimPaks;}

const std::string &Skat::name(){return _name;}

void Skat::shareStimPaks(int number, int &stock){
  if(_stimPaks <  number){
    std::cout << "Don't be greedy" << std::endl;
    return ;
  }
  stock += number;
  _stimPaks -= number;
  std::cout << "Keep the change." << std::endl;
}
void Skat::addStimPaks(unsigned int number){
  _stimPaks += number;
  if (!number) std::cout<<"Hey boya, did you forget something ?" << std::endl;
}
void Skat::useStimPaks(){
  if (_stimPaks > 0){
    std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
    _stimPaks--;
    return;
  }
  std::cout << "Mediiiiiic" << std::endl;
}

void Skat::status(){
  std::cout << "Soldier "<< _name <<" reporting "<< _stimPaks<<" stimpaks remaining sir !" << std::endl;
}
