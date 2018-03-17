//
// KoalaBot.cpp for azd in /home/debrau_c/cours/piscine/cpp_d07a/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 18:57:36 2017 Carl DEBRAUWERE
// Last update Wed Jan 11 04:05:50 2017 Carl DEBRAUWERE
//

#include <iostream>
#include "KoalaBot.h"

void KoalaBot::setParts(Arms &p){
  this->_arms = p;
}
void KoalaBot::setParts(Head &p){
  this->_head = p;
}
void KoalaBot::setParts(Legs &p){
  this->_legs = p;
}

void KoalaBot::swapParts(Arms &p){
  Arms tmp;
  tmp = _arms;
  _arms = p;
  p = tmp;
}
void KoalaBot::swapParts(Legs &p){
  Legs tmp;
  tmp = _legs;
  _legs = p;
  p = tmp;
}
void KoalaBot::swapParts(Head &p){
  Head tmp;
  tmp = _head;
  _head = p;
  p = tmp;
}

KoalaBot::~KoalaBot(){}
KoalaBot::KoalaBot(std::string serial){
  _serial = serial;
}


bool KoalaBot::status() const{
  if (_arms.isFunctionnal()
      && _legs.isFunctionnal()
      && _head.isFunctionnal())
    return true;
  return false;
}

void KoalaBot::informations() const{
  std::cout << "[KoalaBot] " << _serial << std::endl;

  _arms.informations();
  _legs.informations();
  _head.informations();
}
