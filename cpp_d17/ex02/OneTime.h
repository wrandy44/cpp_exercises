/*
** OneTime.hh for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
** Last update Fri Jan 20 22:47:46 2017 Carl DEBRAUWERE
*/

#ifndef _ONETIME_H_
# define _ONETIME_H_

#include <string>
# include "IEncryptionMethod.h"

class OneTime : public IEncryptionMethod{
  std::string _key;
  unsigned int _posKey;
public:
  OneTime(std::string const &s);
  ~OneTime();
  void incrementePosKey();
  char getPosKey();
  virtual void encryptChar(char plainchar);
  virtual void decryptChar(char cipherchar);
  virtual void reset();
  int getInterstice();
};

#endif /* OneTime */
