/*
** DomesticKoala.cpp for azd in /home/debrau_c/bin
** Made by Carl DEBRAUWERE
** Login   <debrau_c@epitech.net>
** 
** Started on  Mon Jan 16 09:33:45 2017 Carl DEBRAUWERE
// Last update Fri Jan 20 09:08:32 2017 Carl DEBRAUWERE
*/

#include <vector>
#include <string>
#include <iostream>
#include "KoalaAction.h"
#include "DomesticKoala.h"

typedef void (KoalaAction::*methodPointer_t)(const std::string &);

std::vector <methodPointer_t> const * DomesticKoala::getActions(void) const{
  return &_action;
}
DomesticKoala::~DomesticKoala(){

}
