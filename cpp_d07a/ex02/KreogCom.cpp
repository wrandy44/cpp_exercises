//
// KreogCom.cpp for azd in /home/debrau_c/cours/piscine/cpp_d07a/ex02
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 23:15:29 2017 Carl DEBRAUWERE
// Last update Wed Jan 11 04:03:15 2017 Carl DEBRAUWERE
//

#include "KreogCom.h"

KreogCom::KreogCom(int x, int y, int serial):_serial(serial), _x(x), _y(y){
  _link = 0;
  std::cout << "KreogCom " << _serial << " initialised" << std::endl;
  
}

KreogCom::~KreogCom(){
  std::cout << "KreogCom " << _serial << " shutting down" << std::endl;
}

void KreogCom::addCom(int x, int y, int serial){
  KreogCom *tmp = new KreogCom(x, y, serial);
  tmp->_link = _link;
  _link = tmp;
  
}

KreogCom *KreogCom::getCom(){
  return this->_link;
}
void KreogCom::removeCom(){
  if (_link == 0) return;
  KreogCom *save = _link;
  _link = _link->_link;
  delete save;
}

void KreogCom::ping() const{
  std::cout << "KreogCom " << _serial << " currently at " << _x << " " << _y << std::endl << std::flush;
}

void KreogCom::locateSquad() const{
    if (_link != 0) _link->locateSquad();
  ping();
}
