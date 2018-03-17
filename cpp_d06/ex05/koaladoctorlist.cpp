//
// koaladoctorlist.cpp for ada in /home/debrau_c/cours/piscine/cpp_d06/ex05
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 01:25:36 2017 Carl DEBRAUWERE
// Last update Tue Jan 10 09:26:42 2017 Carl DEBRAUWERE
//

#include <iostream>
#include "koaladoctorlist.h"

KoalaDoctorList::KoalaDoctorList(KoalaDoctor *now){
  this->p = now;
  this->next = NULL;
}

KoalaDoctorList::~KoalaDoctorList(){}

KoalaDoctorList *KoalaDoctorList::getNext(){return this->next;}
KoalaDoctor *KoalaDoctorList::getContent(){return this->p;}

void KoalaDoctorList::append(KoalaDoctorList *sk){
  if (!this->next) this->next = sk;
  else this->next->append(sk);
}

KoalaDoctor *KoalaDoctorList::getFromName(std::string s){
  if (this->p != NULL)
    {
      if (this->p->getName() == s) return (this->p);
      else if (this->next == NULL) return NULL;
      else this->next->getFromName(s);
    }
  return (NULL);
}

KoalaDoctorList *KoalaDoctorList::remove(KoalaDoctorList *sk){
  KoalaDoctorList *prev, *cur;
  for (cur = this, prev = NULL; cur != NULL; cur = cur->getNext()){
    if (cur == sk){
      if (cur == this) return (this->next);
      else {
	prev->next = cur->next;
	return this;
      }
      return cur->next;
    }
  }
  return NULL;
}

KoalaDoctorList *KoalaDoctorList::removeFromName(std::string str){
  KoalaDoctorList *prev, *cur;
  for (cur = this, prev = NULL; cur != NULL; cur = cur->getNext()){
    if (cur->getContent()->getName() == str){
      if (cur == this) return (this->next);
      else {
	prev->next = cur->next;
	return this;
      }
      return cur->next;
    }
  }
  return NULL;
}

void KoalaDoctorList::dump(){
  std::cout << "Liste des patients: ";
  for (KoalaDoctorList *c = this; c != NULL;c = c->getNext()){
    std::cout << ((!c)? "NULL":c->getContent()->getName());
    std::cout << ((!c->getNext())? ".":", ");
  }
  std::cout << std::endl;
}

bool KoalaDoctorList::isEnd(){
  return (this->next == NULL)? true:false;
}
