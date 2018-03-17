/*
** String.c for zdazd in /home/debrau_c/cours/cpp_d03_FALSE/ex00
**
** Made by debrau_c
**
** Started on  Fri Jan  6 10:46:22 2017 debrau_c
** Last update Sat Jan  7 01:09:45 2017 Carl DEBRAUWERE
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
static int compare_s(String *this, String const *str);
static size_t copy(String *this, char *s, size_t n, size_t pos);
static char const* c_str(String *this);
static int compare_c(String *this, char const *str);
static int empty(String *this);
static int find_s(String *this, struct s_string const *str, size_t pos);
static int find_c(String *this, char const *str, size_t pos);
static void insert_c(String *this, size_t pos, char const *str);
static void insert_s(String *this, size_t pos, String const *str);
static int to_int(String *this);
static String *split_s(String *this, char sep);
static char **split_c(String *this, char sep);

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
  this->empty = &empty;
  this->find_s = &find_s;
  this->find_c = &find_c;
  this->c_str = &c_str;
  this->insert_s = &insert_s;
  this->insert_c = &insert_c;
  this->to_int = &to_int;
  this->split_s = &split_s;
  this->split_c = &split_c;
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

static int find_s(String *this, String const *str, size_t pos){
  char *a = strstr(&this->str[pos], str->str);
  if (a == NULL) return (-1);
  return (a - this->str);
}

static int find_c(String *this, char const *str, size_t pos){
  char *a = strstr(&this->str[pos], str);
  if (a == NULL) return (-1);
  return (a - this->str);
}

static void insert_c(String *this, size_t pos, char const *str){
  char *tmp;
  if (this->str == NULL) return ;
  if (pos > strlen(this->str)){
    tmp = strdup(this->str);
    free(this->str);
    this->str = malloc(sizeof(char) * (strlen(str) + strlen(tmp) + 1));
    strcpy(this->str, tmp);
    strcat(this->str, str);
    return ;
  }

  tmp = strdup(this->str);
  free(this->str);
  this->str = malloc(sizeof(char) * (strlen(str) + strlen(tmp) + 3));
  size_t i;
  for (i = 0; i < pos; i++)
    this->str[i] = tmp[i];
  unsigned int k = i;
  size_t j = 0;
  for (;i < pos + strlen(str); i++){
    this->str[i] = str[j];
    j++;
  }
  for (;i < strlen(str) + strlen(tmp);i++){
    this->str[i] = tmp[k];
    k++;
  }
  this->str[i] = 0;
}

static void insert_s(String *this, size_t pos, String const *str){
  char *tmp;
  if (this->str == NULL) return ;
  if (pos > strlen(this->str)){
    tmp = strdup(this->str);
    free(this->str);
    this->str = malloc(sizeof(char) * (strlen(str->str) + strlen(tmp) + 1));
    strcpy(this->str, tmp);
    strcat(this->str, str->str);
    return ;
  }
  tmp = strdup(this->str);
  free(this->str);
  this->str = malloc(sizeof(char) * (strlen(str->str) + strlen(tmp) + 1));
  size_t i;
  for (i = 0; i < pos; i++)
    this->str[i] = tmp[i];
  unsigned int k = i;
  size_t j = 0;
  for (;i < pos + strlen(str->str); i++){
    this->str[i] = str->str[j];
    j++;
  }
  for (;i < strlen(str->str) + strlen(tmp);i++){
    this->str[i] = tmp[k];
    k++;
  }
  this->str[i] = 0;
}

static int to_int(String *this){
  return (atoi(this->str));
}

static String *split_s(String *this, char sep){
  String *tab;
  int i, size = 0;
  for (i = 0; this->str[i]; i++)
    if (this->str[i] == sep){
      size++;
    }
  size++;
  tab = malloc(sizeof(String) * size);
  i = 0;
  char *tmp;
  tmp = strtok(this->str, (char[]){sep,'\0'});
  while (tmp != NULL){
    StringInit(&tab[i], tmp);
    tmp = strtok(NULL, (char[]){sep,'\0'});
    i++;
  }
  tab[i].str = NULL;
  return (tab);
}

static char **split_c(String *this, char sep){
  char **tab;
  char *strCopy;
  int i, size = 0;

  strCopy = strdup(this->str);
  for (i = 0; this->str[i]; i++)
    if (this->str[i] == sep){
      size++;
    }
  size += 2;
  tab = malloc(sizeof(char *) * size);
  i = 0;
  char *tmp;
  tmp = strtok(strCopy, (char[]){sep,'\0'});
  while (tmp != NULL){
    tab[i] = strdup(tmp);
    tmp = strtok(NULL, (char[]){sep,'\0'});
    i++;
  }
  tab[i] = NULL;
  return (tab);
}
