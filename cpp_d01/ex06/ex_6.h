/*
** ex_6.h for azd in /home/debrau_c/cours/piscine/cpp_d01/ex06
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Wed Jan  4 14:32:39 2017 Carl DEBRAUWERE
** Last update Wed Jan  4 14:58:50 2017 Carl DEBRAUWERE
*/

#ifndef T_FOO_H
# define T_FOO_H

typedef struct s_moo{

}		t_moo;
typedef struct	s_bar
{
  t_moo		foo;
  t_moo		bar;
}		t_bar;

typedef struct	s_my{
  int		foo;
  t_bar		bar;
}		t_my;

typedef struct	s_foo{
  t_my		foo;
  int		bar;
}		t_foo;

#endif /* T_FOO_H */
