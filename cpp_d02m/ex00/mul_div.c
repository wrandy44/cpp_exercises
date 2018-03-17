/*
** mul_div.c for zd in /home/debrau_c/cours/piscine/cpp_d02m/ex00
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Thu Jan  5 09:32:17 2017 Carl DEBRAUWERE
** Last update Thu Jan  5 09:41:22 2017 Carl DEBRAUWERE
*/

void add_mul_4param(int first,int second, int* add ,int* mul)
{
  *add = first + second;
  *mul = first * second;
}

void add_mul_2param(int *first,int *second)
{
  int a,b;

  a=*first;
  b=*second;
  *first = a + b;
  *second = a * b;
}
