/*
**  Woody.hh for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
** Last update Mon Jan 16 17:28:01 2017 Carl DEBRAUWERE
*/

#ifndef _WOODY_H_
#define _WOODY_H_
#include "Toy.h"

class Woody : public Toy{
public:
  Woody(const std::string &n, const std::string &fn = "woody.txt");
  ~Woody(){}
  virtual void speak(const std::string &s){
    std::cout << "WOODY: " << _name << " \"" <<  s << "\"" << std::endl;
  }
  virtual bool speak_es(const std::string &s){
    e = "wrong mode";

    return false;
    (void) s;
    std::cout << "WOODY: " << _name << " \"" <<  s << "\"" << std::endl;
  }
};

#endif /* Woody */
