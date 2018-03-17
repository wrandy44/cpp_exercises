/*
** DomesticKoala.hh for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
1;4402;0c** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
** Last update Fri Jan 20 09:09:37 2017 Carl DEBRAUWERE
*/

#ifndef _DOMESTICKOALA_H_
# define _DOMESTICKOALA_H_

#include <string>
#include <iostream>
#include <vector>
#include "KoalaAction.h"

class DomesticKoala{

 public:
 DomesticKoala(KoalaAction &a):_ka(a), _action(256){  };
 DomesticKoala(const DomesticKoala &a):_ka(a._ka), _action(a._action){};
  ~DomesticKoala();
  typedef void (KoalaAction::*methodPointer_t)(const std::string &);
  
  std::vector <methodPointer_t> const * getActions(void) const;

  DomesticKoala &operator=(const DomesticKoala &a){
    this->_action = a._action;
     this->_ka = a._ka;
    return *this;
  };

  void learnAction(unsigned char c, methodPointer_t mt){
    _action[c] = mt;
  };

  void unlearnAction(unsigned char c){
    _action[c] = 0;
  };
  void doAction(unsigned char c, const std::string &s){
    methodPointer_t tmp;

    tmp = _action[c];
    if (tmp)
      (_ka.*tmp)(s);
  };
  
  void setKoalaAction(KoalaAction &a){
    _ka = a;
  };
  
 private:
  KoalaAction &_ka;
  std::vector<methodPointer_t> _action;
};

typedef void (KoalaAction::*methodPointer_t)(const std::string &);

#endif /* ok */
