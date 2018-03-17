//
// koalanurselist.cpp for zd in /home/debrau_c/cours/piscine/cpp_d06/ex05
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 01:53:24 2017 Carl DEBRAUWERE
// Last update Tue Jan 10 09:26:56 2017 Carl DEBRAUWERE
//

#include <iostream>
#include "koalanurselist.h"

KoalaNurseList::KoalaNurseList(KoalaNurse *now){
  this->p = now;
  this->next = NULL;
}

KoalaNurseList::~KoalaNurseList(){}

KoalaNurseList *KoalaNurseList::getNext(){return this->next;}
KoalaNurse *KoalaNurseList::getContent(){return this->p;}

void KoalaNurseList::append(KoalaNurseList *sk){
  if (!this->next) this->next = sk;
  else this->next->append(sk);
}

KoalaNurse *KoalaNurseList::getFromID(int s){
  if (this->p != NULL)
    {
      if (this->p->getID() == s) return (this->p);
      else if (this->next == NULL) return NULL;
      else this->next->getFromID(s);
    }
  return (NULL);
}

KoalaNurseList *KoalaNurseList::remove(KoalaNurseList *sk){
  KoalaNurseList *prev, *cur;
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

KoalaNurseList *KoalaNurseList::removeFromID(int id){
  KoalaNurseList *prev, *cur;
  for (cur = this, prev = NULL; cur != NULL; cur = cur->getNext()){
    if (cur->getContent()->getID() == id){
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

void KoalaNurseList::dump(){
  std::cout << "Liste des patients: ";
  for (KoalaNurseList *c = this; c != NULL;c = c->getNext()){
    if(!c) std::cout << "NULL";
    else std::cout << c->getContent()->getID();
    std::cout << ((!c->getNext())? ".":", ");
  }
  std::cout << std::endl;
}

bool KoalaNurseList::isEnd(){
  return (this->next == NULL)? true:false;
}
