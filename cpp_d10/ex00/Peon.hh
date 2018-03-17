//
// Peon.hh for azd in /home/debrau_c/cours/piscine/cpp_d10/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Fri Jan 13 14:22:20 2017 Carl DEBRAUWERE
// Last update Fri Jan 13 14:36:45 2017 Carl DEBRAUWERE
//

#ifndef PEON_HH
# define PEON_HH
# include <string>
# include "Victim.hh"

class Peon : public Victim{
public:
  Peon(const std::string s);
  ~Peon();
  virtual void getPolymorphed() const;
};
#endif 
