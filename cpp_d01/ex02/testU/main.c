/*
** main.c for AZD in /home/debrau_c/cours/piscine/cpp_d01/ex02
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Wed Jan  4 16:24:58 2017 Carl DEBRAUWERE
** Last update Wed Jan  4 16:47:25 2017 Carl DEBRAUWERE
*/

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "bitmap.h"

int main(void)
{
  t_bmp_header header;
  t_bmp_info_header info;
  int d;uint32_t pixel = 0x00FFFFFF;

  make_bmp_header(&header, 32);
  make_bmp_info_header(&info, 32);

  d=open("32px.bmp", O_CREAT | O_TRUNC | O_WRONLY, 0644);
  write(d, &header, sizeof(header));
  write(d, &info, sizeof(info));
  for(size_t i = 0; i<32*32;++i)
    write(d, &pixel, sizeof(pixel));
  close(d);
  return 0;
}
