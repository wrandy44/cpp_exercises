//
// ex01.hpp for zd in /home/debrau_c/cours/piscine/cpp_d15/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Wed Jan 18 11:02:47 2017 Carl DEBRAUWERE
// Last update Wed Jan 18 11:06:31 2017 Carl DEBRAUWERE
//


#ifndef EX01_H
# define EX01_H

template<typename T>
int compare(const T &a, const T &b){
  if (a == b) return 0;
  return (a < b) ? -1 : 1;
}
#endif /* ** */
