//
// ex00.hpp for azd in /home/debrau_c/cours/piscine/cpp_d15/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Wed Jan 18 10:48:46 2017 Carl DEBRAUWERE
// Last update Wed Jan 18 10:53:49 2017 Carl DEBRAUWERE
//

#ifndef _EX00_H_
# define _EX00_H_

template<typename T>
void swap(T &a, T &b){
  T c = a;
  a = b;
  b = c;
}

template<typename T>
T min(T a, T b){
  return (a < b)? a : b; 
}

template<typename T>
T max(T a, T b){
  return (a > b)? a : b; 
}

template<typename T>
T add(T a, T b){
  return a + b;
}

#endif /* */
