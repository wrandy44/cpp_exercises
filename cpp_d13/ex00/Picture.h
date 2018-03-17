/*
** Picture.h for ZAD in /home/debrau_c/cours/piscine/cpp_d13/ex00
** 
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:42:52 2017 Carl DEBRAUWERE
** Last update Tue Jan 17 00:12:32 2017 Carl DEBRAUWERE
*/

#ifndef PICTURE_H
# define PICTURE_H

#include <iostream>
# include <string>
class Picture{
  std::string _data;
 public:
  Picture();
  Picture(const Picture &a);
  Picture(const std::string &fn);
  ~Picture();
  bool getPictureFromFile(const std::string &s);
  std::string getData() const{
    return _data;
  };
  void setData(std::string s){
    _data = s;
  };
  Picture & operator=(const Picture &a);
};

#endif /* ** */
