/*
** drawing.c for ad in /home/debrau_c/cours/piscine/cpp_d01/ex03
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Wed Jan  4 19:01:00 2017 Carl DEBRAUWERE
** Last update Wed Jan  4 22:06:17 2017 Carl DEBRAUWERE
*/

#include <stdint.h>
#include <stdlib.h>
#include "drawing.h"
#include "bitmap.h"

void draw_square(uint32_t **img, t_point *orig, size_t size, uint32_t color){
  unsigned int	i;
  unsigned int	j;
  for (i = orig->x; i < orig->x + size; i++)
    for (j = orig->y ; j < orig->y + size; j++)
      img[i][j] = color;
}

