//
// droid.hh for zad in /home/debrau_c/cours/piscine/cpp_d08/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Wed Jan 11 09:23:05 2017 Carl DEBRAUWERE
// Last update Wed Jan 11 19:58:20 2017 Carl DEBRAUWERE
//

#ifndef DROID_H
# define DROID_H

# include <string>
# include <iostream>
# include <ostream>

class Droid{
  std::string _id;
  size_t _energy;
  size_t const _attack;
  size_t const _resist;
  std::string *_status;
public:
  Droid(std::string n="");
  Droid(const Droid& a);
  ~Droid();
  // getters
  size_t getEnergy() const;
  size_t getAttack() const;
  size_t getToughness() const;
  std::string *getStatus() const;
  std::string getId() const;
  // setters
  void setEnergy(size_t);
  void setStatus(std::string *);
  void setId(std::string s);
  void print(std::ostream &flux) const;
  Droid &operator=(Droid const & a);
};

Droid &operator<<(Droid &a, size_t &s);
std::ostream &operator<<(std::ostream &flux, Droid const&a);
bool operator==(Droid const &a, Droid const &b);
bool operator!=(Droid const &a, Droid const &b);

#endif /* */

