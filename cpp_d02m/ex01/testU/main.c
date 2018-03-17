#include <stdio.h>
#include "mem_ptr.h"
void add_str(char *str1, char *str2, char **res);
void add_str_struct(t_str_op *str_op);

int main(){
  char *str1 ="Hi. ", *str2 = "It works", *res;
  t_str_op str_op;

  add_str(str1, str2, &res);
  
  printf("%s\n", res ) ;
  str_op.str1  =  str1;
    str_op.str2  =  str2;
    add_str_struct(&str_op);
  printf("%s\n", str_op.res) ;
}
