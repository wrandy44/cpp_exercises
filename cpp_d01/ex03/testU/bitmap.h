/*
** bitmap.h for zad in /home/debrau_c/cours/piscine/cpp_d01/ex02
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Wed Jan  4 15:28:59 2017 Carl DEBRAUWERE
** Last update Wed Jan  4 16:57:58 2017 Carl DEBRAUWERE
*/

#ifndef T_BMP_HEADER
# define T_BMP_HEADER
# include <stdint.h>
typedef struct __attribute__((packed))	s_bmp_header
{
  uint16_t	magic;
  uint32_t	size;
  uint16_t	_app1;
  uint16_t	_app2;
  uint32_t	offset;
}		t_bmp_header;

typedef struct	__attribute__((packed)) s_bmp_info_header
{
  uint32_t	size;
  int32_t	width;
  int32_t	height;
  uint16_t	planes;
  uint16_t	bpp;
  uint32_t	compression;
  uint32_t	raw_data_size;
  int32_t	h_resolution;
  int32_t	w_resolution;
  uint32_t	palette_size;
  uint32_t	important_colors;
}		t_bmp_info_header;

void make_bmp_header(t_bmp_header *header, size_t size);
void make_bmp_info_header(t_bmp_info_header *header, size_t size);

#endif 
