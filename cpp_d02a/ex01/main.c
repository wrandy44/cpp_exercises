/*
** main.c for azd in /home/debrau_c/cours/piscine/cpp_d02a/ex01
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Thu Jan  5 20:48:27 2017 Carl DEBRAUWERE
** Last update Thu Jan  5 21:50:40 2017 Carl DEBRAUWERE
*/

#include <stdlib.h>
#include "simple_btree.h"

int     main(void)
{
  t_tree        tree = NULL;
  t_tree        left_sub_tree;
  unsigned int  size;
  unsigned int  depth;
  double        max;
  double        min;

  btree_create_node(&tree, 42.5);
  btree_create_node(&(tree->right), 100);
  btree_create_node(&(tree->left), 20);

  left_sub_tree = tree->left;

  btree_create_node(&(left_sub_tree->left), 30);
  btree_create_node(&(left_sub_tree->right), 5);

  size = btree_get_size(tree);
  depth = btree_get_depth(tree);

  printf("The size of the three is %u\n", size);
  printf("The depth of the three is %u\n", depth);

  max = btree_get_max_value(tree);
  min = btree_get_min_value(tree);

  printf("The values of the tree go from %f to %f\n", min, max);
}
