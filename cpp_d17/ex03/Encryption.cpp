/*
** Encryption.cpp for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
// Last update Sat Jan 21 01:28:55 2017 Carl DEBRAUWERE
*/

#include "Encryption.h"
Encryption::Encryption(IEncryptionMethod& encryptionMethod,
		       methodPointer_t mpt):_method(encryptionMethod),
					    _func(mpt)
{
  encryptionMethod.reset();
}

Encryption::~Encryption(){

}
