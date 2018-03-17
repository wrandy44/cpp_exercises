//
// PowerFist.hh for zd in /home/debrau_c/cours/piscine/cpp_d10/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Fri Jan 13 14:56:05 2017 Carl DEBRAUWERE
// Last update Sat Jan 14 00:32:13 2017 Carl DEBRAUWERE
//

#ifndef POWER_FIST_HH
# define POWER_FIST_HH

# include "AWeapon.hh"

class PowerFist :public AWeapon{

public:
  PowerFist(std::string const &s = "Power Fist", int ap = 8, int d = 50):AWeapon(s, ap, d){

  };
  ~PowerFist(){};
  void attack(){
    if (costFail(getAPCost())) return ;
    std::cout << "* pschhh... SBAM! *" << std::endl;
  }
};

#endif /* **/
