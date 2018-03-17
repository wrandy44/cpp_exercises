/*
** LittleHand.cpp for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
// Last update Tue Jan 17 21:40:23 2017 Carl DEBRAUWERE
*/

#include <string>
#include <iostream>
#include "LittleHand.h"

LittleHand::LittleHand(){

}
LittleHand::~LittleHand(){

}

static int countBox(Coconut const * const * coconuts_packet){
  int i;
  for (i = 0; coconuts_packet[i] ; i++);
  return i;
}

FruitBox * const * LittleHand::organizeCoconut(Coconut const* const* coconuts_packet){
  if (coconuts_packet == NULL) return NULL;
  FruitBox **ret;
  int size = countBox(coconuts_packet);
  int _size = (size / 6) + 2;
  int j = 0;
  ret = new FruitBox*[_size];
  for (int i = 0; i < _size; i++){
    ret[i] = new FruitBox(6);
  }
  int i;
  for (i = 0; i < size; i++){
    const Fruit *noC = const_cast<Coconut *>(const_cast<Coconut * const *>(coconuts_packet)[i]);
    ret[i / 6]->putFruit(noC);
    if (i % 6 == 0 && i != 0) j++;
  }
   ret[j] = NULL;
  return ret;
}

void LittleHand::sortFruitBox(FruitBox& unsorted, FruitBox& lemons, FruitBox& bananas, FruitBox& limes){
  FruitBox save(unsorted.nbFruits());
  Fruit *tmp = unsorted.pickFruit();
  
  while (tmp != 0){
    if (tmp->getName() == "lemon" && limes.getSize() != limes.nbFruits())
      lemons.putFruit(tmp);
    else if (tmp->getName() == "banana" && limes.getSize() != limes.nbFruits())
      bananas.putFruit(tmp);
    else if (tmp->getName() == "lime" && limes.getSize() != limes.nbFruits())
      limes.putFruit(tmp);
    else{
      save.putFruit(tmp);
    }
    tmp = unsorted.pickFruit();
  }
  tmp = save.pickFruit();
  while(tmp != 0){
    unsorted.putFruit(tmp);
    tmp = save.pickFruit();
  }
}
