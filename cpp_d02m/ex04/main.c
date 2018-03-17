/*
** main.c for azd in /home/debrau_c/cours/piscine/cpp_d02m/ex04
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Thu Jan  5 11:27:55 2017 Carl DEBRAUWERE
** Last update Thu Jan  5 19:44:13 2017 Carl DEBRAUWERE
*/

#include "castmania.h"
#include <stdio.h>

int     main()
{
  int   i = 5;
  float f = 42.5;
  t_instruction inst;
  t_add add;
  t_div div;
  t_integer_op  int_op;

  printf("Display i : ");
  exec_instruction(PRINT_INT, &i);
  printf("Display f : ");
  exec_instruction(PRINT_FLOAT, &f);
  printf("\n");
  int_op.a = 10;
  int_op.b = 3;
  add.add_type = ABSOLUTE;
  add.add_op = int_op;
  inst.output_type = VERBOSE;
  inst.operation = &add;
  printf("10 + 3 = ");
  exec_operation(ADD_OPERATION, &inst);
  printf("Indeed, 10 + 3 = %d\n\n", add.add_op.res);

  div.div_type = INTEGER;
  div.div_op = &int_op;
  inst.operation = &div;
  printf("10 / 3 = ");
  exec_operation(DIV_OPERATION, &inst);
  printf("Indeed, 10 / 3 = %d\n\n", int_op.res);
}
