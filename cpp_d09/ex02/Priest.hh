//
// Priest.hh for azd in /home/debrau_c/cours/piscine/cpp_d09/ex02
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Thu Jan 12 19:57:09 2017 Carl DEBRAUWERE
// Last update Fri Jan 13 01:23:25 2017 Carl DEBRAUWERE
//

#ifndef PRIEST_HH
# define PRIEST_HH

# include "Character.hh"
#include "Mage.hh"
class Priest : public Mage{

public:
  Priest(const std::string &s, int lv):Mage(s, lv){
    _carac = Characteristics(4, 4, 42, 21, 2);
    talk("enters in the order");
  };
  ~Priest(){};
  int CloseAttack(){
    if (Range != Character::CLOSE || outOfPower(10)) return 0;
    _power -= 10;
    talk("uses a spirit explosion");
    Range = Character::RANGE;
    return 10 + _carac.getSpirit();
  }
  int RangeAttack(){
    if (Range != Character::RANGE || outOfPower(25)) return 0;
    _power -= 25;
    talk("launches a fire ball");
    return 20 + _carac.getSpirit();
  };
  void Heal(){
    if (outOfPower(10)) return ;
    _power -= 10;
    _pv = (_pv + 70 > _maxPv)? _maxPv : _pv + 50;
    talk("casts a little heal spell");
  };
};

#endif /* */
