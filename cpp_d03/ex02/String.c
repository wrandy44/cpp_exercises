/*
** String.c for zdazd in /home/debrau_c/cours/cpp_d03_FALSE/ex00
**
** Made by debrau_c
** Login   <debrau_c@epitech.net>
**
** Started on  Fri Jan  6 10:46:22 2017 debrau_c
** Last update Fri Jan  6 12:29:30 2017 debrau_c
*/

#include <stdlib.h>
#include <string.h>
#include "String.h"

static void assign_s(String *this, String const *str);
static void assign_c(String *this, char const *c);
static void append_s(String *this, String const *str);
static void append_c(String *this, char const *c);

void StringInit(String *this, char const *s){
  this->str = strdup(s);
  this->assign_s = &assign_s;
  this->assign_c = &assign_c;
  this->append_s = &append_s;
  this->append_c = &append_c;

}

void StringDestroy(String *this){
  free(this->str);
  this->str = NULL;
}

static void assign_s(String *this, String const *str){
  if (this->str == NULL)
    StringInit(this, str->str);
  else{
    free(this->str);
    if ((this->str = malloc(sizeof(char) * (strlen(str->str) + 1))) == NULL)
      return ;
    strcpy(this->str, str->str);
  }
}

static void assign_c(String *this, char const *c){
if (this->str == NULL)
    StringInit(this, c);
  else{
    free(this->str);
    if ((this->str = malloc(sizeof(char) * (strlen(c) + 2))) == NULL)
      return ;
    strcpy(this->str, c);
  }
}

static void append_s(String *this, String const *str){
  char *tmp = strdup(this->str);

  if (this->str == NULL){
    this->str = strdup(str->str);
  }
  free(this->str);
  int size = sizeof(char) + (strlen(tmp) + strlen(str->str) + 1) ;
  this->str = malloc(size);
  if ((this->str = malloc(size)) == NULL) return ;
  strcpy(this->str, tmp);
  strcat(this->str, str->str);
  free(tmp);
}

static void append_c(String *this, char const *c){
  if (this->str == NULL){
    this->str = strdup(c);
    return;
  }
  char *tmp = strdup(this->str);
  free(this->str);
  int size = sizeof(char) + (strlen(tmp) + strlen(c) + 1) ;
  if ((this->str = malloc(size)) == NULL) return ;
  strcpy(this->str, tmp);
  strcat(this->str, c);
  free(tmp);
}
