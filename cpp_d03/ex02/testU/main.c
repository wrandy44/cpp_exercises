/*
** main.c for azd in /home/debrau_c/cours/cpp_d03_FALSE/ex00
**
** Made by debrau_c
** Login   <debrau_c@epitech.net>
**
** Started on  Fri Jan  6 10:49:48 2017 debrau_c
** Last update Fri Jan  6 12:27:24 2017 debrau_c
*/

#include <stdio.h>
#include "String.h"

int main(){
  String str;
  String b;

  StringInit(&str, "salut");
  StringInit(&b, "coloc");

  str.append_c(&str, "mais oui");
  printf("%s\n", str.str);
  str.append_c(&str, "coucou");
  printf("%s\n", str.str);
  StringDestroy(&str);
  StringDestroy(&b);
}
