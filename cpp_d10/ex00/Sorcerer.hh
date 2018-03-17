//
// Sorcerer.hh for zad in /home/debrau_c/cours/piscine/cpp_d10/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Fri Jan 13 11:23:56 2017 Carl DEBRAUWERE
// Last update Fri Jan 13 14:29:44 2017 Carl DEBRAUWERE
//
#ifndef _SORCERER_HH_
#define _SORCERER_HH_

# include <ostream>
# include <iostream>
# include <string>
# include "Victim.hh"
class Sorcerer{
  std::string _name;
  std::string _title;
public:
  Sorcerer(const std::string &n, const std::string &t);
  ~Sorcerer();
  void describe(std::ostream &flux);
  void polymorph(Victim const &s){
    s.getPolymorphed();
  };
};

std::ostream &operator<<(std::ostream &flux, Sorcerer &Sor);
#endif /* **/
