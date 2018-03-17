//
// ex06.hpp for az in /home/debrau_c/cours/piscine/cpp_d15/ex06
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Thu Jan 19 00:16:07 2017 Carl DEBRAUWERE
// Last update Thu Jan 19 09:07:17 2017 Carl DEBRAUWERE
//

#ifndef _EX_06_H_
# define _EX_06_H_

#include <iostream>
#include <string>
#include <sstream>

int check(std::stringstream &ss, float a){
  (void) a;
  ss << "[float:"<< a  <<"]";
  return 2;
}

int check(std::stringstream &ss, int a){
  (void) a;
  ss << "[int:"<< a  <<"]";
  return 1;
}

int check(std::stringstream &ss, std::string a){
  ss << "[string:\""<< a  <<"\"]";
  return 0;
}
template<typename t>
int check(std::stringstream &ss, t a){
  (void) a;
  ss << "[???]";
  return 3;
}

template<class X, class Y = X>
class Tuple{
public:
  X a;
  Y b;
  std::string toString() const{
    std::stringstream ss;
    ss << "[TUPLE ";
    check(ss, a);
    check(ss, b);
    ss << "]";
    return ss.str();
  };
  
};




#endif /* _EX_06_H_ */
