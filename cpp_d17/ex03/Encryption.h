/*
** Encryption.hh for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
** Last update Sat Jan 21 01:30:25 2017 Carl DEBRAUWERE
*/

#ifndef _ENCRYPTION_H_
# define _ENCRYPTION_H_

#include <iostream>
#include <algorithm>
#include <string>
#include "IEncryptionMethod.h"

typedef void (IEncryptionMethod::*methodPointer_t)(char c);

class Encryption{
  IEncryptionMethod &_method;
  methodPointer_t _func;
 public:
 Encryption(IEncryptionMethod& encryptionMethod, methodPointer_t mpt);
  ~Encryption();
  static void encryptString(IEncryptionMethod &m,const std::string &str){
    m.reset();
    std::for_each(str.begin(), str.end(), Encryption(m, &IEncryptionMethod::encryptChar));
    std::cout<<std::endl;
  };
  static void decryptString(IEncryptionMethod &m, const std::string &str){
    m.reset();
    std::for_each(str.begin(), str.end(), Encryption(m, &IEncryptionMethod::decryptChar));
    std::cout << std::endl;
  };
  void operator()(char c){
    (_method.*_func)(c);
  };
};

#endif /* Encryption */
