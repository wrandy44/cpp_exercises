/*
** add.c for azd in /home/debrau_c/cours/piscine/cpp_d02m/ex04
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Thu Jan  5 12:02:24 2017 Carl DEBRAUWERE
** Last update Thu Jan  5 12:27:32 2017 Carl DEBRAUWERE
*/

#include "castmania.h"

int normal_add(int a, int b){
  return (a+b);
}

int absolute_add(int a, int b){
  a *= (a < 0) ? -1:1;
  b *= (b < 0) ? -1:1;
  return a + b;
}

void exec_add(t_add *op){
  t_integer_op *tmp = &op->add_op;
  if (op->add_type == NORMAL){
    tmp->res = tmp->a+ tmp->b;
  }
  else if (op->add_type == ABSOLUTE){
    tmp->res = absolute_add(tmp->a, tmp->b);
  }
}
