/*
**  Buzz.hh for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
*/

#ifndef _BUZZ_H_
#define _BUZZ_H_
#include <string>
# include "Toy.h"

class Buzz : public Toy{
public:
 Buzz(const std::string &n, const std::string &fn = "buzz.txt");
 ~Buzz(){}
 void speak(const std::string &s){
   std::cout << "BUZZ: " << _name << " \"" <<  s << "\"" << std::endl;;
  } 
 virtual bool speak_es(const std::string &s){
   std::cout << "BUZZ: " << _name << " senorita \"" <<  s << "\" senorita" << std::endl;
   return true;
 };
};
#endif /* Buzz */
