/*
** main.c for azd in /home/debrau_c/cours/cpp_d03_FALSE/ex00
**
** Made by debrau_c
** Login   <debrau_c@epitech.net>
**
** Started on  Fri Jan  6 10:49:48 2017 debrau_c
** Last update Fri Jan  6 23:19:41 2017 Carl DEBRAUWERE
*/

#include <stdlib.h>
#include <stdio.h>
#include "String.h"

int main(){
  String str;

  StringInit(&str, "salut");

  printf("la string : >%s<, est-elle vide ? : %d\n", str.str, str.empty(&str));
  str.clear(&str);
  printf("la string : >%s<, est-elle vide ? : %d\n", str.str, str.empty(&str));
  StringDestroy(&str);
}
