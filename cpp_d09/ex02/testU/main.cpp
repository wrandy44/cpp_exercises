//
// main.cpp for main in /home/bordes_c/PiscineCpp/cpp_d09/ex01
// 
// Made by Corentin Bordes
// Login   <bordes_c@epitech.net>
// 
// Started on  Thu Jan 12 14:03:01 2017 Corentin Bordes
// Last update Thu Jan 12 20:18:47 2017 Carl DEBRAUWERE
//

#include "Character.hh"
#include "Warrior.hh"
#include "Priest.hh"
int	main()
{
  Warrior _w("Guerrier><", 42);
  Character _c("Charac><", 20);
  Priest _p("A Priest", 20);
  Mage _m("Magii", 21);
  //   Exo 00
  /*_c.TakeDamage(50);
   _c.TakeDamage(200);
   _c.TakeDamage(200);
   _c.Heal();*/
   //    _c.Range = Character::RANGE;
   //_c.TakeDamage(_s.CloseAttack());

   //  Ex 1
  /*  
   _w.Range = Character::RANGE;
  _c.TakeDamage(_w.RangeAttack());
    _w.TakeDamage(_c.RangeAttack());
    _w.Range = Character::CLOSE;
   _w.TakeDamage(_c.CloseAttack());
   _c.TakeDamage(_w.CloseAttack());
  _w.Heal();
  _c.TakeDamage(_w.CloseAttack());
  _c.TakeDamage(_w.CloseAttack());
  _c.TakeDamage(_w.CloseAttack());
  _w.RestorePower();
  _c.TakeDamage(_w.CloseAttack());*/
  // _m.Heal();
  //  _w.TakeDamage(_m.CloseAttack());
  //_w.TakeDamage(_m.RangeAttack());

  // Ex02
  _p.Heal();
  _p.RestorePower();
  _p.TakeDamage(_m.CloseAttack());
  _p.TakeDamage(_m.RangeAttack());
  _m.TakeDamage(_p.CloseAttack());
  _p.Range = Character::RANGE;
  _m.TakeDamage(_p.RangeAttack());

  // Ex03
   //  _a.Heal();
   //_a.RestorePower();
  return (0);
}
