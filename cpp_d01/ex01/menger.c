/*
** menger.c for azd in /home/debrau_c/cours/piscine/cpp_d01/ex01
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Wed Jan  4 22:39:33 2017 Carl DEBRAUWERE
** Last update Wed Jan  4 22:43:49 2017 Carl DEBRAUWERE
*/
#include <stdio.h>
void fractal(int nb, int size, int x, int y){
  if (nb == 0) return;
  
  printf("%.3d %.3d %.3d\n",size /3, x + size /3, y + size /3);  
  for (int i = 0; i <3; i++)
    for (int j = 0; j < 3; j++)
      if (i != 1 || j != 1)
	fractal(nb-1, size/3, x + (size/3)*i, y + (size/3)*j); 
}
