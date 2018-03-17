/*
** String.h for ZDAZD in /home/debrau_c/cours/cpp_d03_FALSE/ex00
**
** Made by debrau_c
** Login   <debrau_c@epitech.net>
**
** Started on  Fri Jan  6 10:46:49 2017 debrau_c
** Last update Fri Jan  6 11:07:08 2017 debrau_c
*/

#ifndef MY_STRING_H
# define MY_STRING_H

typedef struct s_string{
  char		*str;
  int		length_alloc;
}		String;

void	StringInit(String *this, char *s);
void	StringDestroy(String *this);
#endif /* */
