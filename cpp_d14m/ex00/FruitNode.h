/*
** FruitNode.hh for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
** Last update Tue Jan 17 13:44:21 2017 Carl DEBRAUWERE
*/

#ifndef _FRUIT_NODE_
# define _FRUIT_NODE_

#include "Fruit.h"
class FruitNode{
public:
  Fruit *data;    
  FruitNode *next;
};

#endif /* FruitNode */
