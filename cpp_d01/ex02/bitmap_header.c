/*
** bitmap_header.c for azd in /home/debrau_c/cours/piscine/cpp_d01/ex02
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Wed Jan  4 15:47:41 2017 Carl DEBRAUWERE
** Last update Wed Jan  4 18:51:35 2017 Carl DEBRAUWERE
*/

#include <stdlib.h>
#include "bitmap.h"

void make_bmp_header(t_bmp_header *header, size_t size)
{

  header->magic = 0x4D42;
  header->size = size * size * 4 + 54;
  header->_app1 = 0;
  header->_app2 = 0;
  header->offset = 54;
}

void make_bmp_info_header(t_bmp_info_header *header, size_t size)
{

  header->size = 40;
  header->width = size;
  header->height = size;
  header->planes = 1;
  header->bpp = 32;
  header->compression = 0;
  header->raw_data_size = size * size * 4;
  header->h_resolution = 0;
  header->w_resolution = 0;
  header->palette_size = 0;
  header->important_colors = 0;
}
