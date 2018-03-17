/*
** FruitBox.cpp for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
// Last update Tue Jan 17 21:46:52 2017 Carl DEBRAUWERE
*/

#include <iostream>
#include "FruitBox.h"

FruitBox::FruitBox(int size){
  _size = (size < 0)? 0 : size ;
  _nbFruits = 0;
  _head = 0;
}

FruitBox::~FruitBox(){

}

bool FruitBox::checkDoubleFruit(Fruit *f){
  FruitNode *tmp = this->_head;
  int view = 0;
  while (tmp != 0){
    if (tmp->data == f)
      return true;
    //    else if (f->getName() == tmp->data->getName())
    //view++;
    if (view > 0) return true;
    tmp = tmp->next;
  }
  return false;
}

bool FruitBox::putFruit(Fruit *f){
  if (_size == _nbFruits) return false;
  if (f == NULL) return false;
  if (checkDoubleFruit(f)) return false;
  FruitNode *tmp = _head;
  if (_head == 0){
    _head = new FruitNode();
    _head->data = f;
    _head->next = 0;
    _nbFruits++;
    return true;
  }
  while (tmp->next != NULL){
    tmp = tmp->next;
  }
  tmp->next = new FruitNode();
  tmp->next->next = 0;
  tmp->next->data = f;
  _nbFruits++;
  return true;
} //Return false if full

Fruit *FruitBox::pickFruit(){
  if (_head == 0 || _nbFruits == 0) return 0;
  FruitNode *tmp = _head;
  _head = _head->next;
  _nbFruits--;
  return tmp->data;
}//Return 0 if is empty

FruitNode *FruitBox::head() const {
  return _head;
}//Return 0 if empty
