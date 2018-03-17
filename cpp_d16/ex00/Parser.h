/*
** Parser.hh for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
** Last update Thu Jan 19 12:13:36 2017 Carl DEBRAUWERE
*/

#ifndef _PARSER_H_
# define _PARSER_H_

#include <stack>
#include <string>
#include <iostream>
#include <cstdlib>

class Parser{
private:
  std::stack<int> nb;
  std::stack<char> ope;
  int _res;
public:
  Parser();
  ~Parser();
  void reset();
  int result() const { return _res; } ;
  void calc();
  void feed(const std::string &s);
  void feed2(const std::string &s);
};

#endif /* list */
