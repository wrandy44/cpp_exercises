#include "String.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
  String s;
  char	**tabC;
  String *tabS;
  
  StringInit(&s, "Voici-la-chaine-de test-vois-tu?");

    printf(" Split de  : [%s] par le carac : [%c]\n", s.str, '-');
  tabC = s.split_c(&s, '-');

  printf(" Split de  : [%s] par le carac : [%c]\n", s.str, '-');
  tabS = s.split_s(&s, '-');

  int i = 0;
  while (tabS[i].str != NULL){
    printf("%s\n",tabS[i].str);
    i++;
  }
  printf("/****/\n");
  i = 0;
  while (tabC[i] != NULL){
    printf("%s\n",tabC[i]);
    i++;
  }
  StringDestroy(&s);
}
