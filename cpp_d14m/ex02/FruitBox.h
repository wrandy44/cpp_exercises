/*
** FruitBox.hh for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
** Last update Tue Jan 17 21:15:30 2017 Carl DEBRAUWERE
*/

#ifndef _FRUITBOX_H_
# define _FRUITBOX_H_

# include "Fruit.h"
# include "FruitNode.h"

class FruitBox{
  int _size;
  int _nbFruits;
  FruitNode *_head;  
public:
  FruitBox(int size);
  ~FruitBox();
  bool putFruit(const Fruit *f);
  Fruit *pickFruit();
  FruitNode *head() const;//Return 0 if empty
  int nbFruits(){ return _nbFruits;};
  int getSize(){ return _size; } ;
  bool checkDoubleFruit(const Fruit *f);
};

#endif /* FruitBox */
