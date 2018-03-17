/*
** koaladoctorlist.h for azd in /home/debrau_c/cours/piscine/cpp_d06/ex05
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Tue Jan 10 01:27:16 2017 Carl DEBRAUWERE
** Last update Tue Jan 10 01:48:10 2017 Carl DEBRAUWERE
*/

#ifndef KOALA_DOC_LIST
# define KOALA_DOC_LIST

#include "koaladoctor.h"
class KoalaDoctorList{
  KoalaDoctor *p;
  KoalaDoctorList *next;
 public:
  KoalaDoctorList(KoalaDoctor *);
  ~KoalaDoctorList();
  void append(KoalaDoctorList *);
  KoalaDoctor *getFromName(std::string s);
  KoalaDoctorList *remove(KoalaDoctorList *sk);
  KoalaDoctorList *removeFromName(std::string s);
  void dump();
  bool isEnd();
  KoalaDoctor *getContent();
  KoalaDoctorList *getNext();
};
#endif /* */
