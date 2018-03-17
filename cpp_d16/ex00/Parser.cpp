/*
** Parser.cpp for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
// Last update Thu Jan 19 14:42:21 2017 Carl DEBRAUWERE
*/

#include "Parser.h"

Parser::Parser(){
  _res = 0;
}
Parser::~Parser(){

}

void Parser::reset(){
  _res = 0;
  while (nb.size() > 0)nb.pop();
  while (ope.size() > 0)ope.pop();
}

void Parser::calc(){
  if (ope.size() == 0) return ;
  int res = 0;
  char op = ope.top();
  ope.pop();
  int b = nb.top();
  nb.pop();
  int a = nb.top();
  nb.pop();
  do{
    switch(op){
    case '%':
      res += a % b;break;
    case '/':
      res += a / b;break;
    case '*':
      res += a * b;break;
    case '+':
      res += a + b;break;
    case '-':
      res += a - b;break;
    }
    if (ope.size() != 0){
      op = ope.top();//recup l'operateur
      ope.pop();
    }
    nb.push(res);
  }while (op != '(' && ope.size() != 0);
}

void Parser::feed(const std::string &s){
  std::string str = s;
  while (str.find(" ") != std::string::npos){
    str.erase(str.find(" "), 1);
  }
  feed2(str);
}

void Parser::feed2(const std::string &s){
  for (unsigned int i = 0; s[i] ;i++){
    if (s[i] >= '0' && s[i] <= '9'){
      nb.push(std::atoi(s.substr(i).c_str()));
      while (s[i] >= '0' && s[i] <= '9')i++;
      i--;
    }
    else if (s[i] == ')' || i== s.size()){
      calc();
    }
    else if (s[i] == '+'
	     || s[i] == '-'
	     || s[i] == '/'
	     || s[i] == '*'
	     || s[i] == '%'
	     || s[i] == '('){
      ope.push(s[i]);
    }
  }
  if (ope.size() == 1)
    calc();
  _res += nb.top();
}
