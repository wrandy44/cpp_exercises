//
// SuperMutant.hh for azd in /home/debrau_c/cours/piscine/cpp_d10/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Fri Jan 13 16:43:57 2017 Carl DEBRAUWERE
// Last update Sat Jan 14 00:16:45 2017 Carl DEBRAUWERE
//

#ifndef SUPER_MUTANT_HH
# define SUPER_MUTANT_HH

class SuperMutant : public AEnemy{

public:
  SuperMutant(int hp = 170, std::string const &t):AEnemy(hp, t){
    std::cout << "Gaaah. Me want smash heads !" << std::endl;
  };
  ~SuperMutant(){std::cout << "Aaargh ..."<< std::endl;}
  void takeDamage(int x){//Implicilty virtual
    x -= 3;
    if (x < 0) return ;
    _hp -= x;
    if (_hp < 0) _hp = 0;
  };
};

#endif /*** */
