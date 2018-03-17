/*
** MutantStack.hh for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
// Last update Fri Jan 20 00:05:50 2017 Carl DEBRAUWERE
*/

#ifndef _MUTANTSTACK_H_
# define _MUTANTSTACK_H_

#include <stack>

template<class T>
class MutantStack : public std::stack<T>{
public:
  MutantStack(){ };
  ~MutantStack(){ };
  
  class iterator{
    unsigned int _pos;
    MutantStack &_a;
  public:
    iterator(MutantStack &b){ _a = b; };
    ~iterator(){};
    void setPos(int x){ _pos = x; } ;
    void setMS(MutantStack &a){ _a = a; } ;
    MutantStack &operator*(){ return _a; } ;
  };
  
  iterator begin(){
    iterator res;

    res.setPos(0);
    res.setMS(this->top());
    return res;
  };

  iterator end(){
    std::stack<T> tmp;
    iterator res;
    res.setPos(this->size() - 1);
    while (this->size() > 0){
      tmp.push(this->top());
      this->pop();
    }
    res.setMS(tmp.top());
    while (tmp.size() > 0){
      this->push(tmp.top());
      tmp.pop();
    }
    return res;
  };
};

#endif /* MutantStack */
