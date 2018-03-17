//
// Mage.hh for zed in /home/debrau_c/cours/piscine/cpp_d09/ex02
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Thu Jan 12 19:36:49 2017 Carl DEBRAUWERE
// Last update Fri Jan 13 01:28:56 2017 Carl DEBRAUWERE
//

#ifndef MAGE_HH
# define MAGE_HH

# include "Character.hh"

class Mage : virtual public Character{

protected:

public:
  Mage(const std::string &s, int lv):Character(s, lv){
    _carac = Characteristics(6, 6, 12, 11, 7);
   talk("teleported");
  };
  ~Mage(){};
  int CloseAttack(){
    if (Range != Character::CLOSE
	|| outOfPower(10)) return 0;
    _power -= 10;
    Range = Character::RANGE;
    talk("blinks");
    return 0;
  }
  int RangeAttack(){
    if (Range != Character::RANGE || outOfPower(25)) return 0;
    _power -= 25;
    talk("launches a fire ball");
    return 20 + _carac.getSpirit();
  };
  void Heal(){
    _pv = (_pv + 50 > _maxPv)? _maxPv : _pv + 50;
    talk("takes a potion");
  };
  void RestorePower(){
    _power = (50 + _carac.getIntell() > 100 )? 100: 50 + _carac.getIntell();
    talk("eats");
  }

};

#endif /* */
