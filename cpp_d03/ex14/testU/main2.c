/*
41;324;0c** main.c for main.c in /home/bordes_c/PiscineCpp/cpp_d03/ex02
**
** Made by Corentin Bordes
** Login   <bordes_c@epitech.net>
**
** Started on  Fri Jan  6 11:03:46 2017 Corentin Bordes
** Last update Fri Jan  6 16:44:20 2017 Corentin Bordes
*/
#include <stdlib.h>
#include <stdio.h>
#include <stdlib.h>
#include "String.h"

int	main()
{
  String	s1, s2, s3, s4, s5, s6, s7, s8;
  char		c;
  int		size, cmp, char_cp, toi;
  char		*str = NULL;
  char	**tab;
  int		a = 0;

  StringInit(&s1, "Je suis la s1");
  StringInit(&s2, "Je suis la s2");
  StringInit(&s3, "Chaine s3");
  StringInit(&s4, "Test");
  StringInit(&s5, "Test");
  StringInit(&s6, "Male");
  StringInit(&s7, "42");
  StringInit(&s8, "Je suis le boss");


  s1.assign_s(&s1, &s2);
  printf("%s => je suis s1 en vérité\n", s1.str);

  s1.assign_c(&s2, "Hello nouvelle s2");
  printf("%s\n", s2.str);

  s1.append_s(&s2, &s3);
  printf("%s = s2+s3\n", s2.str);

  s1.append_c(&s1, "hehe");
  printf("%s =  s1 + \"hehe\" \n", s1.str);

  c = s1.at(&s2, 6);
  printf("Function At : ");
  if (c == 'n')
    printf("Ok\n");
  else
    printf("ERREUR\n");

  s3.clear(&s3);
  printf("Function clear : ");
  if (s3.str[0] == '\0')
    printf("Ok\n");
  else
    printf("ERREUR\n");

  size = s3.size(&s3);
  printf("Function size : ");
  if (size == 0)
    printf("Ok\n");
  else
    printf("ERREUR\n");

  cmp = s4.compare_s(&s4, &s5);
  printf("Function compare_s : ");
  if (cmp == 0)
    printf("Ok\n");
  else
    printf("ERREUR\n");

  cmp = s4.compare_c(&s4, "Test");
  printf("Function compare_c : ");
  if (cmp == 0)
    printf("Ok\n");
  else
    printf("ERREUR\n");

  str = malloc(sizeof(char) * 3);
  char_cp = s4.copy(&s4, str, 2, 1);
  printf("cp = %d\n", char_cp);
  if (((strcmp(str, "es")) == 0) && (char_cp == 2))
      printf("Ok\n");
  else
    printf("ERREUR\n");
  free(str);

  printf("Str 4 = %s | 'Test' expected\n", s4.c_str(&s4));
  if (strcmp(s4.c_str(&s4), "Test") == 0)
      printf("Ok\n");
  else
    printf("ERREUR\n");

  if (s3.empty(&s3))
      printf("Ok\n");
  else
    printf("ERREUR\n");


  if ((s4.find_c(&s4, "es", 1)) == 1)
    printf("Ok\n");
  else
    printf("ERREUR\n");

  s6.insert_c(&s6, 2, " gueu");
  if (strcmp(s6.str, "Ma gueule") == 0)
    printf("Bien ouej %s\n", s6.str);
  else
    printf("ERREUR\n");

  toi = s7.to_int(&s7);
  if (toi == 42)
    printf("OK\n");
  else
    printf("ERREUR\n");

  tab = s8.split_c(&s8, ' ');
  while (tab[a] != NULL)
    {
      printf("%s\n", tab[a]);
      a++;
    }

  a = -1;
  while (tab[++a] != NULL)
    free(tab[a]);
  free(tab);
  StringDestroy(&s1);
  StringDestroy(&s2);
  StringDestroy(&s3);
  StringDestroy(&s4);
  StringDestroy(&s5);
  StringDestroy(&s6);
  StringDestroy(&s7);
  StringDestroy(&s8);
}
