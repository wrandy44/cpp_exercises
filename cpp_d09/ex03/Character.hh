//
// Character.hh for aazd in /home/debrau_c/cours/piscine/cpp_d09/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Thu Jan 12 14:53:03 2017 Carl DEBRAUWERE
// Last update Fri Jan 13 01:05:27 2017 Carl DEBRAUWERE
//

#ifndef CHARACTER_HH
# define CHARACTER_HH

#include <string>
#include <iostream>

class Characteristics{
  int _strength;
  int _stamina;
  int _intell;
  int _spirit;
  int _agility;
  
public:
  Characteristics(){};
  Characteristics(int f, int s, int i, int sp, int a){
    _strength = f;
    _stamina = s;
    _intell = i;
    _spirit = sp;
    _agility = a;
  };
  ~Characteristics(){};
  int getStrength() const{return _strength;};
  int getStamina() const{return _stamina;};
  int getIntell() const{return _intell;};
  int getSpirit() const{return _spirit;};
  int getAgility() const{return _agility;};
  /*
  int setStrength() const;
  int setSta() const;
  int set() const;
  int set() const;
  int set() const;*/
};
class Character{
protected:
  std::string _name;
  int _lv;
  int _pv;
  int _power;
  int _maxPower;
  int _maxPv;
  std::string _race;
  std::string _class;

  Characteristics _carac;

  std::string _weaponName;
  Character(){};
public :
    typedef enum{
    CLOSE, RANGE
  } AttackRange;
  AttackRange Range;
  Character(const std::string &s, int level);
  ~Character();
  //getters
  const std::string getName() const;
  size_t getLvl() const;
  size_t getPower() const;
  size_t getPv() const;
  void talk(std::string s){std::cout << _name << " " << s << std::endl;}
  void talk(int d){std::cout << _name << " takes " << d << " damage" << std::endl;}
  void talkOutOfFight() const {
    std::cout << _name << " out of combat" << std::endl;
  }
  bool outOfPower(int x){
    if (_power < x)
      talk("out of power");
    return (_power < x);
  }
  int CloseAttack(){
    if (Range != Character::CLOSE || outOfPower(10)) return 0;
    _power -= 10;
    talk("strikes with a wood stick") ;
    return 10 + _carac.getStrength();
  }
  int RangeAttack(){
    if (Range != Character::RANGE || outOfPower(10)) return 0;
    _power -= 10;
    talk("launches a stone");
    return 5 + _carac.getStrength();
  }
  void Heal(){
    _pv = ((_pv + 50) > _maxPv)?100:_pv + 50;
    talk("takes a potion");
  }
  void RestorePower(){
    _power = 100;
    talk("eats");
  }
  void TakeDamage(int x){
    _pv -= (_pv - x <= 0)? _pv:x ;
    if (_pv == 0) {
      talkOutOfFight();
      return;
    }
    talk(x);
  }
};
#endif /* **/
