//
// Victim.hh for azd in /home/debrau_c/cours/piscine/cpp_d10/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Fri Jan 13 11:51:15 2017 Carl DEBRAUWERE
// Last update Fri Jan 13 14:34:31 2017 Carl DEBRAUWERE
//

#ifndef VICTIM_HH
#define VICTIM_HH

# include <iostream>
#include <string>
# include <ostream>

class Victim{
protected:
  std::string _name;
public:
  Victim(std::string n){
    _name = n;
    std::cout << "Some random victim called "<< _name <<" just popped !" << std::endl;
  };
  ~Victim(){
    std::cout << "Victim "<< _name <<" just died for no apparent reason !" << std::endl;
  };
  void describe(std::ostream &flux){
    flux << "I'm "<< _name <<" and i like otters !" << std::endl;
  }
  virtual void getPolymorphed() const{
    std::cout << _name << " has been turned into a cute little sheep !" << std::endl;
  }
};

std::ostream &operator<<(std::ostream &flux, Victim &Vic);
#endif /* */
