/*
** castmania.c for azd in /home/debrau_c/cours/piscine/cpp_d02m/ex04
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Thu Jan  5 12:29:33 2017 Carl DEBRAUWERE
** Last update Thu Jan  5 19:44:52 2017 Carl DEBRAUWERE
*/

#include <stdio.h>
#include "castmania.h"

void exec_operation(t_instruction_type inst, void *data){
  if (inst == ADD_OPERATION){
    t_instruction *tmp = (t_instruction *)data;;
    exec_add((t_add *)tmp->operation);
    if (tmp->output_type == VERBOSE)
      printf("%d\n", ((t_add *)tmp->operation)->add_op.res);
  }
  else if (inst == DIV_OPERATION){
    t_instruction *tmp = (t_instruction *)data;;
    exec_div((t_div *)tmp->operation);
    if (tmp->output_type == VERBOSE){
      if (((t_div *)tmp->operation)->div_type == INTEGER)
	printf("%d\n", ( (t_integer_op *)((t_div *)tmp->operation)->div_op)->res);
      else if (((t_div *)tmp->operation)->div_type == DECIMALE)
	printf("%f\n", ((t_decimale_op *) ((t_div *)tmp->operation)->div_op)->res);
    }
  }
}

void exec_instruction(t_instruction_type inst, void *data){
  if (inst == PRINT_INT)
    printf("%d\n", *((int *)data));
  else if(inst == PRINT_FLOAT)
    printf("%f\n", *((float *)data));
  else
    exec_operation(inst, data);
}
