/*
** func_ptr.c for ze in /home/debrau_c/cours/piscine/cpp_d02m/ex03
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Thu Jan  5 10:38:36 2017 Carl DEBRAUWERE
** Last update Thu Jan  5 12:19:17 2017 Carl DEBRAUWERE
*/

#include "func_ptr.h"
#include <stdio.h>
#include <string.h>

void print_normal(char *str)
{
  printf("%s\n", str);
}
void print_upper(char *str)
{
  for (unsigned int i = 0; i < strlen(str);i++)
    {
      if (str[i] >= 'a' && str[i] <= 'z')
	printf("%c", str[i] -'a' + 'A');
       else printf("%c", str[i]);
    }
  printf("\n");
}
void print_reverse(char *str)
{
  for (int i = strlen(str) -1; i >= 0; i--)
    printf("%c", str[i]);
  printf("\n");
}

void print_42(char *str)
{
  str = str;
  printf("42\n");
}

void do_action(t_action action, char *str){
  void (*tab[4])(char *) = {print_normal, print_reverse, print_upper, print_42};
  tab[action](str);
}
