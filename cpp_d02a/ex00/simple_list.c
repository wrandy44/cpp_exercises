/*
** simple_list.c for zad in /home/debrau_c/cours/piscine/cpp_d02a/ex00
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Thu Jan  5 15:30:53 2017 Carl DEBRAUWERE
** Last update Thu Jan  5 20:43:17 2017 Carl DEBRAUWERE
*/

#include <stdlib.h>
#include <stdio.h>
#include "simple_list.h"

unsigned int list_get_size(t_list list){
  int i;
  for (i = 0; list != NULL;i++)
    list = list->next;
  return (i);
}

t_bool list_is_empty(t_list list){
  return (list == NULL)?TRUE:FALSE;
}

void list_dump(t_list list){
  for (; list != NULL;list = list->next)
    printf("%f\n", list->value);
}
t_bool list_add_elem_at_front(t_list *front_ptr,double elem){
  t_node	*newD;

  if ((newD = malloc(sizeof(t_node))) ==NULL)
    return (FALSE);
  newD->value = elem;
  newD->next = *front_ptr;
  *front_ptr = newD;
  return (TRUE);
}

t_bool list_add_elem_at_back(t_list *list, double elem){
  t_node	*newD;
  t_node **start;
  t_list save;

  save = *list;
  start = list;
  
  if (list_is_empty(*list) == TRUE)
    {
      return (list_add_elem_at_front(list, elem));
    }
  for (; (*start)->next != NULL;*start = (*start)->next);
  if ((newD = malloc(sizeof(t_node))) ==NULL)
    return (FALSE);
  newD->next = NULL;
  newD->value = elem;
  (*start)->next = newD;
  *list = save;
  return (TRUE);  
}

t_bool list_add_elem_at_position(t_list *list, double elem, unsigned int pos){
t_node	*newD;
  t_node **start;
  t_list save;
  t_node *tmp;

  if (pos > list_get_size(*list)) return (FALSE);
  save = *list;
  start = list;
  if (pos == 0)
      return (list_add_elem_at_front(list, elem));
  for (unsigned int i = 0; (*start)->next != NULL && i < pos - 1;*start = (*start)->next);
  if ((newD = malloc(sizeof(t_node))) == NULL)
    return (FALSE);
  tmp = (*start)->next;
  (*start)->next = newD;
  newD->next = tmp;
  newD->value = elem;
  *list = save;
  return (TRUE);
}

t_bool list_del_elem_at_front(t_list *list){
  if (list_is_empty(*list) == TRUE) return FALSE;
  t_node *save = *list;
  *list=(*list)->next;
  free(save);
  return TRUE;
}

t_bool list_del_elem_at_back(t_list *list){
  t_node *tmp= *list;
  if (list_is_empty(*list)) return (FALSE);
  if (list_get_size(*list) == 1)
    return list_del_elem_at_front(list);
  while (tmp->next->next != NULL)
    tmp = tmp->next;
  tmp->next = NULL;
  return TRUE;
}

t_bool list_del_elem_at_position(t_list *list, unsigned int position){
  t_list tmp;
  unsigned int i;

  tmp = *list;
  if (list_is_empty(*list) || list_get_size(*list) < position)
    return (FALSE);
  while (tmp->next->next != NULL && i < position){
    i++;
    tmp = tmp->next;
  }
  tmp->next = tmp->next->next;
  return (TRUE);
}

double list_get_elem_at_front(t_list list){
  if (list == NULL) return (0);
  return list->value;
}

double list_get_elem_at_back(t_list list){
  t_list tmp;

  tmp = list;
  if (list_is_empty(list))
    return (0);
  while (tmp->next != NULL){
    tmp = tmp->next;
  }
  return (tmp->value);
}

double list_get_elem_at_position(t_list list, unsigned int pos){
  t_list tmp;
  unsigned int i = 0;
  
  tmp = list;
  if (list_is_empty(list) || pos > list_get_size(list))
    return (0);
  while (tmp->next != NULL && i < pos){
    tmp = tmp->next;
    i++;
  }
  return (tmp->value);
}

t_node *list_get_first_node_with_value(t_list list, double value){
  t_node *tmp = list;

  while (tmp->next != NULL)
    {
      if (tmp->value == value) return (tmp);
      tmp = tmp->next;
    }
  return (NULL);
}
