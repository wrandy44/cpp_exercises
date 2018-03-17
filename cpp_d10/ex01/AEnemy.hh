//
// AEnemy.hh for azd in /home/debrau_c/cours/piscine/cpp_d10/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Fri Jan 13 16:36:38 2017 Carl DEBRAUWERE
// Last update Sat Jan 14 00:11:24 2017 Carl DEBRAUWERE
//

#ifndef AENEMY_HH
# define AENEMY_HH

class AEnemy{
  int _hp;
  std::string _type;
public:
  AEnemy(int hp, std::string const & type){_hp = hp; _type = type;};
  virtual ~AEnemy(){
    
  };
  std::string const getType() const{return _type;};
  int getHP() const{return _hp;};
  void setHP(int x){_hp = x; };
  virtual void takeDamage(int x){
    if (x < 0) return;
    _hp -= x;
    if (_hp < 0) _hp = 0;
  };
};
#endif /** */
