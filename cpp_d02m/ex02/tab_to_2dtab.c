/*
** tab_to_2dtab.c for azd in /home/debrau_c/cours/piscine/cpp_d02m/ex02
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Thu Jan  5 10:21:37 2017 Carl DEBRAUWERE
** Last update Thu Jan  5 10:33:07 2017 Carl DEBRAUWERE
*/

#include <stdlib.h>

void tab_to_2dtab(int *tab, int length, int width, int ***res)
{
  res[0] = malloc(sizeof(int *) * length);
  for (int i = 0; i < length; i++){
    res[0][i] = malloc(sizeof(int) * width);
    for (int j = 0; j < width; j++)
      res[0][i][j] = tab[(i * width)+j];
  }
}
