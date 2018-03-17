/*
** koalanurse.h for zad in /home/debrau_c/cours/piscine/cpp_d06/ex03
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan  9 13:52:05 2017 Carl DEBRAUWERE
** Last update Mon Jan  9 18:40:13 2017 Carl DEBRAUWERE
*/

#ifndef KOALA_NURSE_H
# define KOALA_NURSE_H
#include "sickkoala.h"

class KoalaNurse{
  int id;
  bool work;
 public:
  KoalaNurse(int);
  ~KoalaNurse();
  void giveDrug(std::string d, SickKoala *patient);
  std::string readReport(std::string);
  void timeCheck();
  int getID();
};

#endif /* KOALA_NURSE_H */
