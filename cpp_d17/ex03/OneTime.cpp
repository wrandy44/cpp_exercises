/*
** OneTime.cpp for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
// Last update Fri Jan 20 22:51:58 2017 Carl DEBRAUWERE
*/

#include <iostream>
#include "OneTime.h"

OneTime::OneTime(std::string const &n){
  _key = n;
}

OneTime::~OneTime(){

}

//Get posKey
char OneTime::getPosKey(){
  return _key[_posKey];
}

int OneTime::getInterstice(){
  if (_key[_posKey] >= 'A' && _key[_posKey] <= 'Z')
    return _key[_posKey] - 'A';
  return _key[_posKey] - 'a';
}

void OneTime::incrementePosKey(){
  _posKey++;
  if (_posKey == _key.size()){
    _posKey = 0;
  }
}

static void encryptMinus(int &pc, int c){
  pc += c;
  while (pc > 'z')
    pc -= 26;
}

static void encryptMajus(int &pc, int c){
  pc += c;
  while (pc > 'Z')
    pc -= 26;
}

void OneTime::encryptChar(char plainchar){
  int c = getInterstice();
  int pc = plainchar;
  incrementePosKey();
  if (pc >= 'A' && pc <= 'Z')
    encryptMajus(pc, c);
  else if (pc >= 'a' && pc <= 'z')
    encryptMinus(pc, c);
  char res = pc;
  std::cout << res;
}

static void decryptMinus(int &pc, int c){
  pc -= c;
  while (pc < 'a')
    pc += 26;
}

static void decryptMajus(int &pc, int c){
  pc -= c;
  while (pc < 'A')
    pc += 26;
}

void OneTime::decryptChar(char cipherchar){
  int c = getInterstice();
  int pc = cipherchar;
  incrementePosKey();
  if (pc >= 'A' && pc <= 'Z')
    decryptMajus(pc, c);
  else if (pc >= 'a' && pc <= 'z')
    decryptMinus(pc, c);
  char res = pc;
  std::cout << res;
}

void OneTime::reset(){
  _posKey = 0;
}
