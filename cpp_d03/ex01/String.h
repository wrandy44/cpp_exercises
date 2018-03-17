/*
** String.h for ZDAZD in /home/debrau_c/cours/cpp_d03_FALSE/ex00
**
** Made by debrau_c
** Login   <debrau_c@epitech.net>
**
** Started on  Fri Jan  6 10:46:49 2017 debrau_c
** Last update Fri Jan  6 11:59:02 2017 debrau_c
*/

#ifndef MY_STRING_H
# define MY_STRING_H

typedef struct s_string{
  char		*str;
  void		(*assign_s)(struct s_string *this, struct s_string const *str);
  void		(*assign_c)(struct s_string *this, char const *c);
}		String;

void	StringInit(String *this, char const *s);
void	StringDestroy(String *this);


#endif /* */
