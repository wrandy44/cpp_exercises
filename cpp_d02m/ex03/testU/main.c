/*
** main.c for azd in /home/debrau_c/cours/piscine/cpp_d02m/ex03
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Thu Jan  5 11:01:15 2017 Carl DEBRAUWERE
** Last update Thu Jan  5 11:02:29 2017 Carl DEBRAUWERE
*/

#include "func_ptr.h"
int main(){
  char *str = "I'm using a function pointer";
  do_action(PRINT_NORMAL, str);
    do_action(PRINT_REVERSE, str);
      do_action(PRINT_UPPER, str);
      do_action(PRINT_42, str);
}
