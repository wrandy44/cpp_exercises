//
// ex03.hpp for azd in /home/debrau_c/cours/piscine/cpp_d15/ex03
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Wed Jan 18 15:35:25 2017 Carl DEBRAUWERE
// Last update Wed Jan 18 15:57:40 2017 Carl DEBRAUWERE
//

#ifndef EX_03_HPP
# define EX_03_HPP

#include <iostream>

template<typename X>
void print(const X& x){
  std::cout << x << std::endl;
}


template<typename X>
void foreach(X *a, void (&func)(const X&), int i){
  while (i - 1 >= 0){
    func(*a++);
    i--;
  }
}

#endif /* ** */
