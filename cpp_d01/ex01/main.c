/*
** main.c for m in /home/debrau_c/cours/piscine/cpp_d01/ex01
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Wed Jan  4 10:55:48 2017 Carl DEBRAUWERE
** Last update Wed Jan  4 22:43:34 2017 Carl DEBRAUWERE
*/

#include <stdlib.h>
#include <stdio.h>
void fractal(int, int, int, int);
int	my_atoi(char *str)
{
  int	i;
  int	nb;
  
  i = (str[0] == '-')?1:0;
  nb = 0;
  while (str[i])
    {
      nb *= 10;
      nb += str[i] - '0';
      i++;
    }
  nb *=(str[0] == '-')?-1:1;
  return (nb);
}

int usage(char *bin){
  printf("USAGE : %s [size] [depth]\n", bin);
  return (0);
}

int	main(int argc, char **argv)
{

  if (argc != 3) return (usage(argv[0]));
  int nb = my_atoi(argv[1]);
  int etape = my_atoi(argv[2]);

  fractal(etape, nb, 0, 0);
  return 0;
}
