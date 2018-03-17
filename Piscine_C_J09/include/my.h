/*
** my.h for my.h in /home/debrau_c/rendu/Piscine_C_J09/include
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Fri Oct  9 10:57:26 2015 Carl DEBRAUWERE
** Last update Fri Oct  9 11:22:15 2015 Carl DEBRAUWERE
*/

#ifndef _MY_H_
# define _MY_H_

void my_putchar(char c);
int my_isneg(int nb);
int my_swap(int *a, int *b);
int my_putstr(char *str);
int my_strlen(char *str);
int my_getnbr(char *str);
void my_sort_int_tab(int *tab, int size);
int my_power_rec(int nb, int power);
int my_square_root(int nb);
int my_is_prime(int nombre);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char *src);
char *my_strncpy(char *dest, char *src, int nb);
char *my_revstr(char *str);
char *my_strstr(char *str, char *to_find);
int my_strcmp(char *s1, char *s2);
int my_strncmp(char *s1, char *s2, int nb);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char *str);
int my_str_isnum(char *str);
int my_str_islower(char *str);
int my_str_isupper(char *str);
int my_str_isprintable(char *str);
int my_showstr(char *str);
int my_showmem(char *str, int size);
char *my_strcat(char *dest, char *src);
char *my_strncat(char *dest, char *src, int nb);

#endif //_MY_H_
