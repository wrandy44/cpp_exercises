/*
** String.h for ZDAZD in /home/debrau_c/cours/cpp_d03_FALSE/ex00
**
** Made by debrau_c
** Login   <debrau_c@epitech.net>
**
** Started on  Fri Jan  6 10:46:49 2017 debrau_c
** Last update Sat Jan  7 00:31:11 2017 Carl DEBRAUWERE
*/

#ifndef MY_STRING_H
# define MY_STRING_H

#include <string.h>
#include <stdlib.h>

typedef struct s_string{
  char		*str;
  void		(*assign_s)(struct s_string *this, struct s_string const *str);
  void		(*assign_c)(struct s_string *this, char const *c);
  void		(*append_s)(struct s_string *this, struct s_string const *c);
  void		(*append_c)(struct s_string *this, char const *c);
  char		(*at)(struct s_string *this, size_t pos);
  void    (*clear)(struct s_string *this);
  int     (*size)(struct s_string *this);
}		String;

void	StringInit(String *this, char const *s);
void	StringDestroy(String *this);

#endif /* */
