//
// PlasmaRifle.hh for zad in /home/debrau_c/cours/piscine/cpp_d10/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Fri Jan 13 14:48:32 2017 Carl DEBRAUWERE
// Last update Sat Jan 14 00:17:18 2017 Carl DEBRAUWERE
//

#ifndef PLASMARIFLE_HH
# define PLASMARIFLE_HH

# include "AWeapon.hh"
class PlasmaRifle :public AWeapon{
public:
  PlasmaRifle(std::string const &s = "Plasma Rifle", int ap = 5, int d = 21):AWeapon(s, ap, d){
    
  };
  ~PlasmaRifle(){};
  void attack(){
    if (costFail(getAPCost())) return ;
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
  };
};

#endif /** **/
