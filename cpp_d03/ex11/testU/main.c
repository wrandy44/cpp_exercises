#include <stdio.h>
#include "String.h"

int main(){
  String str;
  char *find = "les";
  String findS;
  
  StringInit(&str, "Salut les papillons");
  StringInit(&findS, "la");

  printf("Insert of [%s] in [%s]",findS.str, str.str);
  str.insert_s(&str, 10, &findS);
  printf("at %d : %s\n",10, str.str);
  /**/
  printf("Insert of [%s] in [%s]",find, str.str);
  str.insert_c(&str, 10, find);
  printf("at %d : %s\n",10, str.str); 

  StringDestroy(&str);
}
