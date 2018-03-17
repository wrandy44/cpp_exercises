/*
** Ratatouille.hh for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
** Last update Thu Jan 19 22:48:15 2017 Carl DEBRAUWERE
*/

#ifndef _RATATOUILLE_H_
# define _RATATOUILLE_H_

#include <sstream>
class Ratatouille{
  std::stringstream _flux;
public:
  // Canonical class
  Ratatouille();
  Ratatouille(Ratatouille const &);
  ~Ratatouille();
  Ratatouille &operator=(const Ratatouille &);
  // Member functions allowing to add ingredients in the cooking pot
  Ratatouille &addVegetable(unsigned char);
  Ratatouille &addCondiment(unsigned int);
  Ratatouille &addSpice(double);
  Ratatouille &addSauce(const std::string &);
  // The member function to extract the dish.
  // The result will be the concatenation of all the added ingredients.
  std::string kooc(void);
};

#endif /* Ratatouille */
