//
// RadScorpion.hh for zda in /home/debrau_c/cours/piscine/cpp_d10/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Fri Jan 13 16:47:33 2017 Carl DEBRAUWERE
// Last update Sat Jan 14 00:06:26 2017 Carl DEBRAUWERE
//

#ifndef RAD_SCORPION_HH
# define RAD_SCORPION_HH

class RadScorpion : public AEnemy{
public:
  RadScorpion(int hp = 80, std::string const &t = "RadScorpion"):AEnemy(hp, t){
    std::cout << "* click click click *" << std::endl;
  };
  ~RadScorpion(){
    std::cout << "* SPROTCH *" << std::endl;
  };
  void takeDamage(int x){
    if (x < 0) return ;
    setHP(getHP() - x);
    if (getHP() < 0)
      setHP(0);
  };
};

#endif 
