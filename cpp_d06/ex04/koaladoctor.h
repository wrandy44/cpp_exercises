/*
** koaladoctor.h for azd in /home/debrau_c/cours/piscine/cpp_d06/ex04
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan  9 17:36:43 2017 Carl DEBRAUWERE
** Last update Mon Jan  9 18:14:50 2017 Carl DEBRAUWERE
*/

#ifndef KOALA_DOCTOR_H
# define  KOALA_DOCTOR_H
#include <iostream>
# include "sickkoala.h"
class KoalaDoctor{
  std::string name;
  bool work;
 public:
  KoalaDoctor(std::string);
  ~KoalaDoctor();
  void diagnose(SickKoala *);
  void timeCheck();
};

#endif /* KOALA_DOCTOR */
