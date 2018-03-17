/*
** KreogCom.h for azd in /home/debrau_c/cours/piscine/cpp_d07a/ex02
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Tue Jan 10 23:15:37 2017 Carl DEBRAUWERE
** Last update Wed Jan 11 01:25:20 2017 Carl DEBRAUWERE
*/

#ifndef KREOGCOM_H
# define KREOGCOM_H
#include <string>
#include <iostream>
class KreogCom{
  const int _serial;
  KreogCom *_link;
  int _x, _y;
 public:
  KreogCom(int x, int y, int serial);
  ~KreogCom();
  void addCom(int x, int y, int serial);
  KreogCom *getCom();
  void removeCom();
  void ping() const;
  void locateSquad() const;
};

#endif /*KREIG*/
