//
// Character.hh for azd in /home/debrau_c/cours/piscine/cpp_d10/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Fri Jan 13 16:50:55 2017 Carl DEBRAUWERE
// Last update Sat Jan 14 00:35:11 2017 Carl DEBRAUWERE
//

#ifndef CHARACTER_HH
# define CHARACTER_HH

# include <ostream>
#include <string>
# include "AWeapon.hh"
# include "AEnemy.hh"

class Character{
private:
  std::string _name;
  int _AP;
  AWeapon *_weapon;

public:
  Character(std::string const & name){
    _AP = 40;
    _weapon = 0;
    _name = name;
  };
  ~Character(){};
  void recoverAP(){
    _AP += 10;
    if (_AP > 40)
      _AP = 40;
  };
  void equip(AWeapon *w){
    _weapon = w;
  };
  virtual void attack(AEnemy *e){
    std::cout << _name << " attacks "<< e->getType()<< " with a " << _weapon->getName() << std::endl;
    e->takeDamage(_weapon->getDamage());
    _weapon->attack();
    _AP -= _weapon->getAPCost();
    if (e->getHP() <= 0) delete e;  
  };
  void stat(std::ostream &f){
    if (_weapon)
      f <<_name<< " has " << _AP << " AP and wields a " << _weapon->getName() << std::endl;
    else
      f << _name << " has " << _AP << " AP and is unarmed" << std::endl;
  };
  std::string const getName() const;
};

std::ostream	&operator<<(std::ostream &flux, Character &c){
  c.stat(flux);
  return flux;
};

#endif /*** **/
