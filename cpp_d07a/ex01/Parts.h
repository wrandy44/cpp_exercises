/*
** Parts.h for azd in /home/debrau_c/cours/piscine/cpp_d07a/ex01
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Tue Jan 10 18:45:34 2017 Carl DEBRAUWERE
** Last update Tue Jan 10 22:47:01 2017 Carl DEBRAUWERE
*/

#ifndef PARTS_H
# define PARTS_H
#include <string>

class Arms{
  bool _func;
  std::string _serial;
 public:
  Arms(std::string serial = "A-01", bool f = true);
  ~Arms();
  void informations() const;
  bool isFunctionnal() const{return _func;};
  std::string serial()const{return _serial;};
};

class Legs{
  bool _func;
  std::string _serial;
 public:
  Legs(std::string serial = "L-01", bool f = true);
  ~Legs();
  void informations() const;
  bool isFunctionnal() const{return _func;};
  std::string serial()const{return _serial;};
};

class Head{
  bool _func;
  std::string _serial;
 public:
  Head(std::string serial = "H-01", bool f = true);
  ~Head();
  virtual void informations() const;
  bool isFunctionnal() const{return _func;};
  std::string serial()const{return _serial;};
};

#endif /* */
