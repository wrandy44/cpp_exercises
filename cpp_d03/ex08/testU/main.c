/*
** main.c for azd in /home/debrau_c/cours/cpp_d03_FALSE/ex00
**
** Made by debrau_c
** Login   <debrau_c@epitech.net>
**
** Started on  Fri Jan  6 10:49:48 2017 debrau_c
** Last update Fri Jan  6 23:14:18 2017 Carl DEBRAUWERE
*/

#include <stdio.h>
#include <string.h>
#include "String.h"

int main(){
  String str;
  String b;
  char s;

  StringInit(&str,"salut");
  /*
  StringInit(&str, "salut");
  StringInit(&b, "coloc");
  str.append_c(&str, "mais oui");
  printf("%s\n", str.str);
  str.append_c(&str, "coucou");
  printf("%s\n", str.str);
  printf("%c\n", str.at(&str, 3));
  printf("size de [%s] = %d\n", str.str, str.size(&str));
  printf("Apres clear : [%s]\n", str.str);
  printf("compare : %s et %s : %d\n", str.str, b.str, str.compare_s(&str, &b));
  printf("strncpy : \n\tavant : %s\nnb : %u\n", s, str.copy(&str, s, 3, 2));

  printf("            \tapres : %s\n", s);
*/
  if (strcmp(str.str, str.c_str(&str)) == 0) printf("ok\n");
  else printf("ko\n");
  StringDestroy(&str);
  StringDestroy(&b);
}
