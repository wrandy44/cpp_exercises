/*
** String.c for zdazd in /home/debrau_c/cours/cpp_d03_FALSE/ex00
**
** Made by debrau_c
** Login   <debrau_c@epitech.net>
**
** Started on  Fri Jan  6 10:46:22 2017 debrau_c
** Last update Fri Jan  6 11:22:31 2017 debrau_c
*/

#include <stdlib.h>
#include <string.h>
#include "String.h"

void StringInit(String *this, char *s){
  if ((this->str = malloc(sizeof(char) * (strlen(s) + 1))) == NULL)
    return ;
  strcpy(this->str, s);
}

void StringDestroy(String *this){
  free(this->str);
  this->str = NULL;
}
