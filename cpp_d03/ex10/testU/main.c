#include <stdio.h>
#include "String.h"

int main(){
  String str;
  char *find = "les";
  String findS;
  
  StringInit(&str, "Salut les papillons");
  StringInit(&findS, "les");
  printf("First occurence of [%s] in [%s] a %d\n", find, str.str, str.find_s(&str, &findS, 0));
  printf("First occurence of [%s] in [%s] a %d\n", find, str.str, str.find_c(&str, find, 0));
  StringDestroy(&str);
}
