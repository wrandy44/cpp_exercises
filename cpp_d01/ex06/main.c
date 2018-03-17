/*
** main.c for azd in /home/debrau_c/cours/piscine/cpp_d01/ex06
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Wed Jan  4 14:35:22 2017 Carl DEBRAUWERE
** Last update Wed Jan  4 15:07:44 2017 Carl DEBRAUWERE
*/

#include <stdio.h>
#include <stdlib.h>

#include "ex_6.h"

int	main(){
  t_foo	foo;

  foo.bar=0;
  foo.foo.foo = 0xCAFE;
  printf("%d\n",sizeof(foo) == sizeof(foo.foo));
  printf("%d\n",sizeof(foo.foo.bar.foo) == sizeof(foo.foo.foo));
  printf("%d\n",sizeof(foo.bar) == 2 * sizeof(foo.foo.bar));
  printf("%d\n", sizeof(foo.foo.foo) == sizeof(foo.foo.bar.bar));
  printf("%d\n", foo.bar);
  printf("%d == %d\n", sizeof(foo), sizeof(foo.foo));
  printf("%d == %d\n", sizeof(foo.foo.bar.foo), sizeof(foo.foo.foo));
  printf("%d == %d\n", sizeof(foo.bar), sizeof(foo.foo.bar) * 2);
  printf("%d == %d\n", sizeof(foo), sizeof(foo.foo));
}
