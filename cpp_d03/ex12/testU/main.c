#include "String.h"

#include <stdio.h>
int main(){
  String s;
  int	x = 12;

  StringInit(&s, "28");
  printf("string : [%s] \t atoi(str) : %d\n", s.str, s.to_int(&s));
    StringInit(&s, "28a");
  printf("string : [%s] \t atoi(str) : %d\n", s.str, s.to_int(&s));
    StringInit(&s, "a28");
  printf("string : [%s] \t atoi(str) : %d\n", s.str, s.to_int(&s));
    StringInit(&s, "639");
  printf("string : [%s] \t atoi(str) : %d\n", s.str, s.to_int(&s)); 
  
}
