/*
** div.c for azd in /home/debrau_c/cours/piscine/cpp_d02m/ex04
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Thu Jan  5 11:26:52 2017 Carl DEBRAUWERE
** Last update Thu Jan  5 11:56:10 2017 Carl DEBRAUWERE
*/

#include "castmania.h"

int integer_div(int a, int b){
  return (b==0)?0:a/b;
}

float decimale_div(int a, int b){
  return (b==0)?0:(float)a/(float)b;
}

void exec_div(t_div *operation){
  t_integer_op *opInt;
  t_decimale_op *opDec;

  if (operation->div_type == INTEGER){
    opInt = (t_integer_op *)operation->div_op;
    opInt->res = opInt->a / opInt->b;
  }
     
  else if (operation->div_type == DECIMALE){
    opDec = (t_decimale_op *)operation->div_op;
    opDec->res = (float)opDec->a / (float)opDec->b;
  }   
}
