/*
** String.c for zdazd in /home/debrau_c/cours/cpp_d03_FALSE/ex00
**
** Made by debrau_c
**
** Started on  Fri Jan  6 10:46:22 2017 debrau_c
** Last update Fri Jan  6 23:16:23 2017 Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
*/

#include <stdlib.h>
#include <string.h>
#include "String.h"

static void assign_s(String *this, String const *str);
static void assign_c(String *this, char const *c);
static void append_s(String *this, String const *str);
static void append_c(String *this, char const *c);
static char at(String *this, size_t pos);
static void clear(String *this);
static int size(String *this);
static int compare_c(String *this, char const *str);
static int compare_s(String *this, String const *str);
static size_t copy(String *this, char *s, size_t n, size_t pos);
static char const* c_str(String *this);
static int empty(String *this);

void StringInit(String *this, char const *s){
  this->str = strdup(s);
  this->assign_s = &assign_s;
  this->assign_c = &assign_c;
  this->append_s = &append_s;
  this->append_c = &append_c;
  this->at = &at;
  this->clear = &clear;
  this->size = &size;
  this->compare_c = &compare_c;
  this->compare_s = &compare_s;
  this->copy = &copy;
  this->c_str = &c_str;
  this->empty = &empty;
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

static char at(String *this, size_t pos){
  if (pos > strlen(this->str))
    return (-1);
  return (this->str[pos]);
}

static void clear(String *this){
  if (this->str == NULL) return ;
  bzero(this->str, strlen(this->str));
}

static int size(String *this){
  if (this->str == NULL) return -1;
  return (strlen(this->str));
}
static int compare_c(String *this, char const *str){
  if (this->str == NULL) return (0);
  return (strcmp(this->str, str));
}

static int compare_s(String *this, String const *str){
  if (this->str == NULL)
    return (0);
  return (strcmp(this->str, str->str));
}

static size_t copy(String *this, char *s, size_t n, size_t pos){
  int j = 0;
  for (unsigned int i = pos; i < pos + n || this->str[i] == '\0'; i++){
    s[j] = this->str[i];
    j++;
  }
  s[j] = '\0';
  return (j);
}

static char const* c_str(String *this){
  return (this->str);
}

static int empty(String *this){
  if (this->str == NULL) return (1);
  if (this->str[0] == '\0') return (1);
  return (0);
}
