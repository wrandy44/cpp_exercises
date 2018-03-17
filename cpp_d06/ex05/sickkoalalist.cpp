//
// sickkoalalist.cpp for zad in /home/debrau_c/cours/piscine/cpp_d06/ex05
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Mon Jan  9 18:38:38 2017 Carl DEBRAUWERE
// Last update Tue Jan 10 09:26:43 2017 Carl DEBRAUWERE
//

#include <iostream>
#include "sickkoalalist.h"

SickKoalaList::SickKoalaList(SickKoala *now){
  this->p = now;
  this->next = NULL;
}

SickKoalaList::~SickKoalaList(){
  
}

void SickKoalaList::append(SickKoalaList *sk){
  if (!this->next) this->next = sk;
  else this->next->append(sk);
}

SickKoala *SickKoalaList::getFromName(std::string s){
  if (this->p != NULL)
    {
      if (this->p->getName() == s) return (this->p);
      else if (this->next == NULL) return NULL;
      else this->next->getFromName(s);
    }
  return (NULL);
}

SickKoalaList *SickKoalaList::remove(SickKoalaList *sk){
  SickKoalaList *prev, *cur;
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

SickKoalaList *SickKoalaList::removeFromName(std::string str){
  SickKoalaList *prev, *cur;
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

void SickKoalaList::dump(){
  std::cout << "Liste des patients: ";
  for (SickKoalaList *c = this; c != NULL;c = c->getNext()){
    std::cout << ((!c->getContent())? "NULL":c->getContent()->getName());
    std::cout << ((!c->getNext())? ".":", ");
  }
  std::cout << std::endl;
}

SickKoala *SickKoalaList::getContent(){
  return this->p;
}

SickKoalaList *SickKoalaList::getNext(){
  return this->next;
}

bool SickKoalaList::isEnd(){
  return (this->next == NULL)? true:false;
}
