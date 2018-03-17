//
// Warrior.hh for azd in /home/debrau_c/cours/piscine/cpp_d09/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Thu Jan 12 17:42:19 2017 Carl DEBRAUWERE
// Last update Fri Jan 13 01:12:50 2017 Carl DEBRAUWERE
//

#ifndef WARRIOR_HH
# define WARRIOR_HH
# include "Character.hh"

class Warrior : virtual public Character{
protected:
  Warrior(){};
public:
  Warrior(const std::string &s, int lv);
  ~Warrior();
  int CloseAttack(){
       if (Range != Character::CLOSE
	   || outOfPower(30))
	 return 0;
       _power -= 30;
       talk("strikes with his " + _weaponName);
       return 20 + _carac.getStrength();
  };
  int RangeAttack(){
       if (Range != Character::RANGE || outOfPower(10)) return 0;
       _power -= 10;
       talk("intercepts");
       Range = Character::CLOSE;
       return 0;
  };
  void Heal(){
    _pv = (_pv + 50 > _maxPv)? _maxPv : _pv + 50;
    talk("takes a potion");
  };
  void RestorePower(){
    _power = 100;
    talk("eats");
  }
};

#endif /* */
