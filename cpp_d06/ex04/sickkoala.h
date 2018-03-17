/*
** sickkoala.h for azd in /home/debrau_c/cours/piscine/cpp_d06/ex02
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan  9 11:14:16 2017 Carl DEBRAUWERE
** Last update Mon Jan  9 17:37:18 2017 Carl DEBRAUWERE
*/

#ifndef SICK_KOALA_H
# define SICK_KOALA_H

#include <string>

class SickKoala{
 private:
  std::string name;
 public:
  SickKoala(std::string);
  ~SickKoala();
  std::string getName();
  void poke();
  bool takeDrug(std::string);
  void overDrive(std::string);
};

#endif /* SICK_KOALA_H */
