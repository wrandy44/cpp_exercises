//
// main.cpp for azad in /home/debrau_c/cours/piscine/cpp_d06/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Mon Jan  9 09:20:18 2017 Carl DEBRAUWERE
// Last update Mon Jan  9 20:00:43 2017 Carl DEBRAUWERE
//

#include <iostream>
#include <iomanip>
#include <string>

int main(){
  float nb;
  std::string str;
  std::cin >> nb;
  std::cin >> str;
  std::cout.setf(std::ios::fixed, std::ios::floatfield);
  if (str == "Fahrenheit"){
    std::cout << std::setw(16) << std::setprecision(3) << (5.0 / 9.0) * (nb - 32) << std::setw(16) << "Celsius" << std::endl;
  }
  else if (str == "Celsius"){
    std::cout << std::setw(16) << std::setprecision(3) << nb * (9.0 / 5.0) + 32 << std::setw(16)<<" Fahrenheit" << std::endl;
  }
}
