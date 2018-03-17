//
// Paladin.hh for azd in /home/debrau_c/cours/piscine/cpp_d09/ex03
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Thu Jan 12 22:57:33 2017 Carl DEBRAUWERE
// Last update Fri Jan 13 01:39:26 2017 Carl DEBRAUWERE
//

#ifndef PALADIN_HH
# define PALADIN_HH

# include "Warrior.hh"
# include "Priest.hh"
class Paladin : public Warrior, public Priest{
public:
  Paladin(const std::string &s, int lv):Warrior(s, lv), Priest(s, lv){
    _carac = Characteristics(9, 10, 10, 10, 2);
    _weaponName = "hammer";
    std::cout << "the light falls on " << _name;
  };
  ~Paladin(){

  };
  int CloseAttack(){
    if (Range != Character::CLOSE || outOfPower(30)) return 0;
    _power -= 30;
    talk("strikes with his " + _weaponName);
    return 20 + _carac.getStrength();
  };
  int RangeAttack(){
    if (Range != Character::RANGE || outOfPower(25)) return 0;
    _power -= 25;
    talk("launches a fire ball");
    return 20 + _carac.getSpirit();
  };
  void RestorePower(){
    _power = 100;
    talk("eats");
  }
  int Intercept(){
    if (!outOfPower(10)) return 0;
      _power -= 10;
      Range = Character::CLOSE;
      return 0;    
  }
};
#endif /* PALADIN */
