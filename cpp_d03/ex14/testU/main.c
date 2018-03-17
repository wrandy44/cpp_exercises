#include "String.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(){
  String s;
  
  StringInit(&s, "Voici-la-chaine-de test-vois-tu?");
  s.aff(&s);
  StringDestroy(&s);
}
