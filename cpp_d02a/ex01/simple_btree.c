/*
** simple_btree.c for azd in /home/debrau_c/cours/piscine/cpp_d02a/ex01
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Thu Jan  5 20:55:29 2017 Carl DEBRAUWERE
** Last update Thu Jan  5 22:02:46 2017 Carl DEBRAUWERE
*/

#include <stdlib.h>
#include "simple_btree.h"

t_bool btree_is_empty(t_tree tree){
  return tree == NULL ? TRUE:FALSE;
}

unsigned int btree_get_size(t_tree tree){
  if (tree == NULL) return (0);
  return (btree_get_depth(tree->left) + btree_get_depth(tree->right));
}

unsigned int btree_get_depth(t_tree tree){
  if (tree == NULL) return (0);
  int left = btree_get_depth(tree->left);
  int right = btree_get_depth(tree->right);
  return (left >right)? left:right;
}

t_bool btree_create_node(t_tree *node_ptr, double value){
  if (*node_ptr != NULL) return (FALSE);
  if ((*node_ptr = malloc(sizeof(t_node))) == NULL) return (FALSE);
  (*node_ptr)->value = value;
  (*node_ptr)->left = (*node_ptr)->right = NULL;
  return (TRUE);
}

t_bool btree_delete(t_tree *root){
  return (FALSE);
}
double btree_get_max_value(t_tree tree){
  return (0);
}

double btree_get_min_value(t_tree tree){
  return (0);
}
