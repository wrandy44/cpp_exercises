/*
** mem_ptr.c for azd in /home/debrau_c/cours/piscine/cpp_d02m/ex01
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Thu Jan  5 09:48:46 2017 Carl DEBRAUWERE
** Last update Thu Jan  5 10:13:32 2017 Carl DEBRAUWERE
*/

#include <string.h>
#include <stdlib.h>
#include "mem_ptr.h"


void add_str(char *str1, char *str2, char **res)
{
  *res = malloc(sizeof(char) * strlen(str1) * strlen(str2) + 1);
  unsigned int i;
  for (i = 0; i < strlen(str1); i++)
    res[0][i]=str1[i];
  unsigned int j;
  for (j = 0; j < strlen(str2); j++)
    res[0][i+j]=str2[j];
   res[0][i+j]='\0';
}

void add_str_struct(t_str_op *str_op)
{
  str_op->res = malloc(sizeof(char) * strlen(str_op->str1) * strlen(str_op->str2) + 1);
  unsigned int i;
  for (i = 0; i < strlen(str_op->str1); i++)
    str_op->res[i]=str_op->str1[i];
  unsigned int j;
  for (j = 0; j < strlen(str_op->str2); j++)
    str_op->res[i+j]=str_op->str2[j];
   str_op->res[i+j]='\0';
}
