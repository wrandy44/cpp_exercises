/*
** white_rabbit.c for zdazd in /home/debrau_c/cours/cpp_d01/ex00
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Wed Jan  4 09:36:34 2017 Carl DEBRAUWERE
** Last update Wed Jan  4 18:28:17 2017 Carl DEBRAUWERE
*/

#include <stdlib.h>
#include <stdio.h>

int	follow_the_white_rabbit(void)
{
  int	total;
  int	nb;

  total = 0;
  nb = 0;
  while (total < 397 && nb != 1 && nb != 37)
    {
      nb=rand()%37+1;
      if (nb == 13 || nb == 34 || nb == 35 || nb == 36)
	printf("droite\n");
      else if (nb == 4 || nb == 5 || nb == 6 || nb == 17 || nb == 18 ||
	       nb == 19 || nb == 20 || nb == 21 || nb == 28)
	printf("gauche\n");
      else if (nb == 10 || nb == 15 || nb == 23)
	printf("devant\n");
      else if (nb == 8 || nb == 16 || nb == 24 || nb == 26 || nb == 32)
	printf("derriere\n");
      total+=nb;
    }
  printf("LAPIN !!!\n");
  return (total);  
}
