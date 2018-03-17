/*
** ex04.cpp for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
// Last update Wed Jan 18 16:45:48 2017 Carl DEBRAUWERE
*/

#include <string>
#include "ex04.hpp"

template<class T>
bool Tester<T>::equal(const T&a, const T&b){
  return (a == b);
}

template<class T>
bool equal(const T& a, const T& b){
  return a == b;
}

template bool equal<int>(const int& a, const int& b);
template bool equal<double>(const double& a, const double& b);
template bool equal<char>(const char& a, const char& b);
template bool equal<float>(const float& a, const float& b);
template bool equal<std::string>(const std::string& a, const std::string& b);

template bool Tester<int>::equal(const int& a, const int &b);
template bool Tester<double>::equal(const double& a, const double &b);
template bool Tester<char>::equal(const char& a, const char &b);
template bool Tester<float>::equal(const float& a, const float &b);
template bool Tester<std::string>::equal(const std::string& a, const std::string  &b);
