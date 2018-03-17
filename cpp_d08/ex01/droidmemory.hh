//
// droidmemory.hh for zda in /home/debrau_c/cours/piscine/cpp_d08/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Wed Jan 11 20:27:38 2017 Carl DEBRAUWERE
// Last update Wed Jan 11 23:29:21 2017 Carl DEBRAUWERE
//

#ifndef DROID_MEMORY_H
# define DROID_MEMORY_H

# include <string>
# include <iostream>

class DroidMemory{
  size_t _fingerPrint;
  size_t _exp;
public:
  DroidMemory();
  ~DroidMemory();
  //getters
  size_t getExp() const;
  size_t getFingerPrint() const;
  //setters
  void setExp(size_t const n);
  void setFingerPrint(size_t const n);
  void print(std::ostream &f) const;
};

DroidMemory	&operator<<(DroidMemory &a, DroidMemory const &b);
DroidMemory	&operator>>(DroidMemory const &a, DroidMemory &b);
DroidMemory	&operator+=(DroidMemory &a, DroidMemory const &b);
DroidMemory	&operator+=(DroidMemory &a, size_t const &b);
DroidMemory	&operator+(DroidMemory const &a, DroidMemory const &b);
bool		operator||(DroidMemory  &a, DroidMemory  &b);
std::ostream &operator<<(std::ostream &flux, DroidMemory const &d);

#endif /* */
