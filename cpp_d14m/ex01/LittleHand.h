/*
** LittleHand.hh for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
** Last update Tue Jan 17 19:43:28 2017 Carl DEBRAUWERE
*/

#ifndef _LITTLEHAND_H_
# define _LITTLEHAND_H_

#include "FruitBox.h"
#include "Coconut.h"

class LittleHand{
public:
  LittleHand();
  ~LittleHand();

  static void sortFruitBox(FruitBox& unsorted, FruitBox& lemons, FruitBox& bananas, FruitBox& limes);
  /*  static FruitBox * const * organizeCoconut(Coconut const* const* coconuts_packet);*/
};

#endif /* LittleHand */
