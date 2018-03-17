/*
** Exo-1.h for azdaz in /home/debrau_c/cours/piscine/cpp_d09
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Thu Jan 12 11:56:27 2017 Carl DEBRAUWERE
** Last update Thu Jan 12 14:41:26 2017 Carl DEBRAUWERE
*/

#ifndef EXO_1_H
# define EXO_1_H
typedef struct s_cthulhu{
  int m_power;
  char *m_name;
  char legend;
}	t_cthulhu;

typedef struct s_koala{
  t_cthulhu m_parent;
  char m_isALegend;
}		t_koala;

//cthlhu
void PrintPower(t_cthulhu *t);
void Attack(t_cthulhu *t);
void Sleeping(t_cthulhu *t);
t_cthulhu *NewCthulhu();
//koala
t_koala* NewKoala(char* name, char _isALegend);
void Eat(t_koala* this);
static void KoalaInitializer(t_koala* this, char* _name, char _isALegend);
static void CthulhuInitializer(t_cthulhu* this);
#endif /* **/
