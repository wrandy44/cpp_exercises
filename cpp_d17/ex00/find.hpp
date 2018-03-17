//
// find.hpp for azazd in /home/debrau_c/cours/piscine/cpp_d17/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Fri Jan 20 10:11:19 2017 Carl DEBRAUWERE
// Last update Fri Jan 20 10:52:55 2017 Carl DEBRAUWERE
//

#ifndef MY_FIND_HPP
# define MY_FIND_HPP
#include <algorithm>

template<typename T>typename T::iterator do_find(T &a, int x){
  return (find(a.begin(), a.end(), x));
}

#endif /* ** */
