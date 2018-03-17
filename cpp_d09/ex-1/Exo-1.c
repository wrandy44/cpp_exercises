/*
** Exo-1.c for azdaz in /home/debrau_c/cours/piscine/cpp_d09
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Thu Jan 12 11:56:31 2017 Carl DEBRAUWERE
** Last update Thu Jan 12 17:56:46 2017 Carl DEBRAUWERE
*/

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "Exo-1.h"

t_cthulhu *NewCthulhu(){
  t_cthulhu *ptr = malloc(sizeof(t_cthulhu));
  if (ptr == NULL) return ptr;
  ptr->legend = 1;
  CthulhuInitializer(ptr);
  return ptr;
}

void PrintPower(t_cthulhu *t){
  printf("Power => %d\n", t->m_power);
}

void Attack(t_cthulhu *t){
  if (t->m_power >= 42){
    t->m_power -= 42;
    printf("%s attacks and destroys the city\n", t->m_name);
  }
  else
    printf("%s can't attack, he doesn't have enough power\n", t->m_name);
}

void Sleeping(t_cthulhu *t){
  t->m_power = 42000;
  printf("%s sleeps\n", t->m_name);
}
//koala

t_koala* NewKoala(char* name, char _isALegend){
  t_koala *n = malloc(sizeof(t_koala));
  if (n == NULL) return NULL;
  n->m_parent.legend = _isALegend;
  CthulhuInitializer(&n->m_parent);
  
  KoalaInitializer(n, name, _isALegend);

  return n;
}

void Eat(t_koala* this){
  this->m_parent.m_power += 42;
  printf("%s eats\n", this->m_parent.m_name);
}

static void KoalaInitializer(t_koala* this, char* _name, char _isALegend){
  this->m_isALegend = _isALegend;
  this->m_parent.m_name = strdup(_name);
  printf("Building %s\n", _name);
}
static void CthulhuInitializer(t_cthulhu* this){
  this->m_power =(this->legend) ? 42 : 0;
  printf("----\n");
  printf("Building Cthulhu\n");
  if ((this->m_name = strdup("Cthulhu")) == NULL)
    return ;  
}
