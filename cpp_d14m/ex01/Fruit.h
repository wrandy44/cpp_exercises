/*
** Fruit.hh for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
** Last update Tue Jan 17 11:20:09 2017 Carl DEBRAUWERE
*/

#ifndef _FRUIT_H_
# define _FRUIT_H_

# include <string>

class Fruit{
 protected:
  int _vitamins;
  std::string _name;
 public:
  Fruit();
  ~Fruit();
  std::string getName() const { return _name; };
  int getVitamins() const { return _vitamins; };
};

#endif /* Fruit */
