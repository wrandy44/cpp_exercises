/*
** String.h for ZDAZD in /home/debrau_c/cours/cpp_d03_FALSE/ex00
**
** Made by debrau_c
** Login   <debrau_c@epitech.net>
**
** Started on  Fri Jan  6 10:46:49 2017 debrau_c
** Last update Sat Jan  7 01:01:21 2017 Carl DEBRAUWERE
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
  int     (*compare_c)(struct s_string *this, char const *str);
  int     (*compare_s)(struct s_string *this, struct s_string const *str);
  size_t  (*copy)(struct s_string *this,char *s, size_t n, size_t pos);
  char const* (*c_str)(struct s_string *this);
  int     (*empty)(struct s_string *this);
  int     (*find_s)(struct s_string *this, struct s_string const *str, size_t pos);
  int     (*find_c)(struct s_string *this, char const *str, size_t pos);
  void    (*insert_c)(struct s_string *this, size_t pos, char const *s);
  void    (*insert_s)(struct s_string *this, size_t pos, struct s_string const *s);
  int     (*to_int)(struct s_string *this);
  struct s_string *(*split_s)(struct s_string *this, char sep);
  char **(*split_c)(struct s_string *this, char sep);
}		String;

void	StringInit(String *this, char const *s);
void	StringDestroy(String *this);

#endif /* */
