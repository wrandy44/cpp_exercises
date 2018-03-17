/*
** Cesar.hh for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
** Last update Fri Jan 20 14:29:46 2017 Carl DEBRAUWERE
*/

#ifndef _CESAR_H_
# define _CESAR_H_

#include "IEncryptionMethod.h"

class Cesar : public IEncryptionMethod{
public:
  Cesar();
  ~Cesar();
  void encryptChar(char plainchar);
  void decryptChar(char cipherchar);
  void reset();
 private:
  int _shift;
};

#endif /* Cesar */
