//
// AWeapon.hh for azd in /home/debrau_c/cours/piscine/cpp_d10/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Fri Jan 13 14:44:15 2017 Carl DEBRAUWERE
// Last update Sat Jan 14 00:35:34 2017 Carl DEBRAUWERE
//

#ifndef AWEAPON_HH
# define AWEAPON_HH

class AWeapon{
private:
  std::string _name;
  int _Damage;
  int _APCost;
  std::string _sound;
public:

  explicit AWeapon(std::string const & name, int apcost, int damage){
    _name = name;
    _APCost = apcost;
    _Damage = damage;
  };
  void setSound(std::string n){ _sound = n; } ;
  virtual ~AWeapon(){};
  virtual bool costFail(int x){
    if (_APCost >= x){
      return false;
    }
    return true;
  };
  std::string getName() const{return _name;};
  int getAPCost() const{return _APCost;};
  int getDamage() const{return _Damage;};
  std::string getSound() const{ return _sound; } ;
  virtual void attack() = 0;
};
#endif /* AWEAPON*/
