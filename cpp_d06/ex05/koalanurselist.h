/*
** koalanurselist.h for azd in /home/debrau_c/cours/piscine/cpp_d06/ex05
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Tue Jan 10 01:50:12 2017 Carl DEBRAUWERE
** Last update Tue Jan 10 01:56:54 2017 Carl DEBRAUWERE
*/

#ifndef KOALA_NURSE_LIST
# define KOALA_NURSE_LIST
# include "koalanurse.h"
class KoalaNurseList{
  KoalaNurse *p;
  KoalaNurseList *next;
 public:
  KoalaNurseList(KoalaNurse *);
  ~KoalaNurseList();
  void append(KoalaNurseList *);
  KoalaNurse *getFromID(int);
  KoalaNurseList *remove(KoalaNurseList *sk);
  KoalaNurseList *removeFromID(int);
  void dump();
  KoalaNurse *getContent();
  KoalaNurseList *getNext();
  bool isEnd();
};

#endif /* !KOALA_NURSE_LIST */
