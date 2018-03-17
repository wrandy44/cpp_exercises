/*
** drawing.h for azd in /home/debrau_c/cours/piscine/cpp_d01/ex03
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Wed Jan  4 20:14:28 2017 Carl DEBRAUWERE
** Last update Wed Jan  4 22:05:28 2017 Carl DEBRAUWERE
*/

#ifndef DRAWING_H
# define DRAWING_H
#include <stdint.h>
typedef struct s_point{
  int x, y;
}t_point;
void draw_square(uint32_t **img, t_point *orig, size_t size, uint32_t color);

#endif 
