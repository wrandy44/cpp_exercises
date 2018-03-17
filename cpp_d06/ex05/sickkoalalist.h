/*
** sickkoalalist.h for azd in /home/debrau_c/cours/piscine/cpp_d06/ex05
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan  9 18:38:35 2017 Carl DEBRAUWERE
** Last update Tue Jan 10 02:04:21 2017 Carl DEBRAUWERE
*/

#ifndef SICK_KOALA_LIST_H
# define SICK_KOALA_LIST_H

#include "sickkoala.h"

class SickKoalaList{
  SickKoala *p;
  SickKoalaList *next;
 public:
  SickKoalaList(SickKoala *);
  ~SickKoalaList();
  void append(SickKoalaList *);
  SickKoala *getFromName(std::string s);
  SickKoalaList *remove(SickKoalaList *sk);
  SickKoalaList *removeFromName(std::string s);
  void dump();
  SickKoala *getContent();
  SickKoalaList *getNext();
  bool isEnd();
};

#endif /* !SICK_KOALA_LIST_H */
