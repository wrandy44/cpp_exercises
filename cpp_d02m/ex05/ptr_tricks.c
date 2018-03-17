/*
** ptr_tricks.c for azd in /home/debrau_c/cours/piscine/cpp_d02m/ex05
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Thu Jan  5 14:28:27 2017 Carl DEBRAUWERE
** Last update Thu Jan  5 14:48:40 2017 Carl DEBRAUWERE
*/

#include "ptr_tricks.h"
#include <stddef.h>
int get_array_nb_elem(int *ptr1, int *ptr2){
  return (ptr2 - ptr1);
}

t_whatever *get_struct_ptr(int *member_ptr){
  int a = offsetof(t_whatever, member);
  t_whatever *b = (void *)member_ptr - a;
  return (b);
}
/*
int main(void){
  int tab[1000] = {0};
  int nb_elem;
  nb_elem = get_array_nb_elem(&tab[666], &tab[708]);
  printf("%d\n", nb_elem);
  }*/
/*
int main(){
  t_whatever test;
  t_whatever *ptr;

  ptr = get_struct_ptr(&test.member);
  if (ptr == &test)
    printf("Its workd");
}

*/
