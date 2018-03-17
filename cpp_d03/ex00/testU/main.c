/*
** main.c for azd in /home/debrau_c/cours/cpp_d03_FALSE/ex00
**
** Made by debrau_c
** Login   <debrau_c@epitech.net>
**
** Started on  Fri Jan  6 10:49:48 2017 debrau_c
** Last update Fri Jan  6 11:07:39 2017 debrau_c
*/

#include "String.h"

int main(){
  String str;

  StringInit(&str, "salut");
  printf("%s\n", str.str);
  StringDestroy(&str);
}
