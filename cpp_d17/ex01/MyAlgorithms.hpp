//
// MyAlgorithms.hpp for azd in /home/debrau_c/cours/piscine/cpp_d17/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Fri Jan 20 10:54:23 2017 Carl DEBRAUWERE
// Last update Fri Jan 20 11:13:09 2017 Carl DEBRAUWERE
//

#ifndef _MY_ALGORITHMS_HPP__
# define _MY_ALGORITHMS_HPP__

#include <algorithm>
#include <iostream>
#include <iomanip>

template<typename T>
void vPrint(T const& contener, void (*showFuncPtr)(int))
{
  std::cout << "Dump (" << std::setw(2) << contener.size() << ')' << ' ';
  std::for_each(contener.begin(), contener.end(), showFuncPtr);
  std::cout << std::endl;
}

template<typename T>
size_t vHowMany(T const& contener, int value)
{
  return std::count(contener.begin(), contener.end(), value);
}

template<typename T>
bool vIsSimilar(T const& contener, int* values)
{
  return std::equal(contener.begin(), contener.end(), values);
}

template<typename T>
void vAssign(T itFrom, T itTo, int value)
{
  std::fill(itFrom, itTo, value);
}

template<typename T>
void vFindAndModify(T& contener, int oldValue, int newValue)
{
  std::replace(contener.begin(), contener.end(), oldValue, newValue);
  }

template<typename T>
typename T::iterator vFindAndKill(T& contener, int value)
{
  return std::remove(contener.begin(), contener.end(), value);
}

template<typename T>
void vShift(T& contener, int nbShift)
{
  std::rotate(contener.begin(), contener.begin() + nbShift, contener.end());
}

template<typename T, typename U>
void vApply(T itFrom, T itTo, U funcPtr)
{
  std::for_each(itFrom, itTo, funcPtr);
}

template<typename T>
void vFlip(T& contener)
{
  std::reverse(contener.begin(), contener.end());
}

template<typename T>
void vToAscOrder(T& contener)
{
  std::sort(contener.begin(), contener.end());
}

template<typename T>
void vToSpecificOrder(T& contener, bool (*cmpFuncPtr)(int, int))
{
  std::sort(contener.begin(), contener.end(), cmpFuncPtr);
}

template<typename T>
typename T::iterator vGiveMeTheFirst(T& contener, int value)
{
  return std::find(contener.begin(), contener.end(), value);
}

template<typename T>
typename T::iterator vRemoveDuplicate(T& contener)
{
  return std::unique(contener.begin(), contener.end());
}

template<typename T>
void vFusionOrderedLists(T const & contener1, T const & contener2, T& contenerToFill)
{
  std::merge(contener1.begin(), contener1.end(), contener2.begin(), contener2.end(), contenerToFill.begin());
}

#endif
