/*
** Cesar.cpp for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
// Last update Fri Jan 20 14:58:53 2017 Carl DEBRAUWERE
*/

#include <iostream>
#include "Cesar.h"

Cesar::Cesar(){
  _shift = 3;
}

Cesar::~Cesar(){

}

static void encryptMinus(char &plainchar, int offset){
  int c = plainchar;
  c += offset;
  while (c > 'z')
    c -= 'z' - 'a' +1;
  plainchar = c;
}

static void encryptMajus(char &plainchar, int offset){
  int c = plainchar;
  c += offset;
  while (c > 'Z')
    c -= ('Z' - 'A') + 1;
  plainchar = c;
}

static void decryptMinus(char &plainchar, int offset){
  int c = plainchar;
  c -= offset;
  while (c < 'a')
    c += 'z' - 'a' +1;
  plainchar = c;
}

static void decryptMajus(char &plainchar, int offset){
  int c = plainchar;
  c -= offset;
  while (c < 'A')
    c += 'Z' - 'A' +1;
  plainchar = c;
}

void Cesar::encryptChar(char plainchar){
  if (plainchar >= 'a' && plainchar <= 'z')
    encryptMinus(plainchar, _shift);
  else if (plainchar >= 'A' && plainchar <= 'Z')
    encryptMajus(plainchar, _shift);
  std::cout << plainchar;
  _shift++;
}

void Cesar::decryptChar(char cipherchar){
  if (cipherchar >= 'a' && cipherchar <= 'z')
    decryptMinus(cipherchar, _shift);
  else if (cipherchar >= 'A' && cipherchar <= 'Z')
    decryptMajus(cipherchar, _shift);
  std::cout << cipherchar;
  _shift++;  
}

void Cesar::reset(){
  _shift = 3;
}
