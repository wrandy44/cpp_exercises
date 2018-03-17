#include <stdlib.h>
#include <stdio.h>
#include "simple_list.h"

int main(void)
{
  t_list list_head = NULL;
  t_node *tmp;

  if (list_add_elem_at_front(&list_head, 1) == TRUE &&
      list_add_elem_at_back(&list_head, 3) == TRUE &&
      list_add_elem_at_back(&list_head, 4) == TRUE &&
      list_add_elem_at_front(&list_head, 0) == TRUE &&
      list_add_elem_at_position(&list_head, 2, 2) == TRUE)
    printf("OK\n");
  else
    printf("KO\n");

  printf("Try to have 1 -> 2 -> 3 -> 4 -> 5\n\n");
  list_dump(list_head);
  printf("\n---------------------------------\n\n");
  /* add a bit of values to play */
  if (list_add_elem_at_back(&list_head, 5) == TRUE &&
      list_add_elem_at_back(&list_head, 6) == TRUE &&
      list_add_elem_at_back(&list_head, 7) == TRUE &&
      list_add_elem_at_back(&list_head, 8) == TRUE &&
      list_add_elem_at_back(&list_head, 9) == TRUE &&
      list_add_elem_at_back(&list_head, 10) == TRUE &&
      list_add_elem_at_back(&list_head, 11) == TRUE &&
      list_add_elem_at_back(&list_head, 12) == TRUE &&
      list_add_elem_at_back(&list_head, 13) == TRUE)
    printf("OK\n");
  else
    printf("KO\n");

  printf("\n-----------pre-check------------\n\n");
  list_dump(list_head);
  printf("\n---------------------------------\n");


  printf("\nTrying to get node with value 5 | ");
  if ((tmp = list_get_first_node_with_value(list_head, 5)) != NULL)
    printf("OK\nIt's value is really %2.0f\n", tmp->value);
  else
    printf("KO\n");

  printf("\nRemoving elem at position 5 (value : %2.0f) | ", list_get_elem_at_position(list_head, 5));
  if (list_del_elem_at_position(&list_head, 5) == TRUE)
    printf("OK\n");
  else
    printf("KO\n");

  printf("\nRemoving elem at back (value : %2.0f) | ", list_get_elem_at_back(list_head));
  if (list_del_elem_at_back(&list_head) == TRUE)
    printf("OK\n");
  else
    printf("KO\n");

  printf("\n--------------check--------------\n\n");
  list_dump(list_head);
  printf("\n---------------------------------\n");

  while (list_is_empty(list_head) == FALSE)
    {
      printf("\nRemoving elem at front (value : %2.0f) | ", list_get_elem_at_front(list_head));
      if (list_del_elem_at_front(&list_head) == TRUE)
	printf("OK\n");
      else
	printf("KO\n");
    }

  list_dump(list_head);
  return (0);
}
