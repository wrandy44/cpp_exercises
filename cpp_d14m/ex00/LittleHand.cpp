/*
** LittleHand.cpp for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
// Last update Tue Jan 17 18:11:13 2017 Carl DEBRAUWERE
*/

#include <string>
#include <iostream>
#include "LittleHand.h"

LittleHand::LittleHand(){

}
LittleHand::~LittleHand(){

}
/*
static int countBox(Coconut const * const * coconuts_packet){
  int i;
  for (i = 0; coconuts_packet[i] ; i++);
  return i;
  }*/
/*
FruitBox * const * LittleHand::organizeCoconut(Coconut const* const* coconuts_packet){
  FruitBox **ret;
  int size = countBox(coconuts_packet);
  int _size = size / 6;
  int j = 0;
  _size += (size % 6 > 1) ? 2 : 1;
  ret = new FruitBox(*);
  for (int i = 0; i < size; i++){
    ret[j].putFruit(coconuts_packet[i]);
    std::cout << i << " dans " << j << std::endl;
    if (i % 6 == 0 && i != 0)
      j++;
  }
}
*/
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
