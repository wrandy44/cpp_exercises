//
// ex02.hpp for azd in /home/debrau_c/cours/piscine/cpp_d15/ex02
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Wed Jan 18 11:15:37 2017 Carl DEBRAUWERE
// Last update Wed Jan 18 23:19:05 2017 Carl DEBRAUWERE
//

#ifndef EX02_HPP
# define EX02_HPP

# include <iostream>

template <typename T>
T min(T a, T b){
  if (a <= b){
    std::cout << "template min" <<std::endl;
    return a;
  }
  else{
    std::cout << "template min" <<std::endl;
    return b;
  }
}

int min(int a, int b){
 if (a <= b){
    std::cout << "non-template min" <<std::endl;
    return a;
  }
  else{
    std::cout << "non-template min" <<std::endl;
    return b;
  }
}

template <typename X>
X templateMin(X *a, unsigned int size){
  if (size == 0) return 0;
  X Min = a[0];
  for (unsigned int i = 1; i < size; i++){
    Min = min<X>(Min, a[i]);
  }
  return Min;
}

int nonTemplateMin(int *a, unsigned int size){
  if (size == 0)
    return 0;
  int Min = a[0];
  for (unsigned int i = 1; i < size; i++){
    Min = min(Min, a[i]);
  }
  return Min;
}

#endif /** ** * ***/
