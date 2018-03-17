//
// Federation.cpp for azd in /home/debrau_c/cours/piscine/cpp_d07m/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 10:25:48 2017 Carl DEBRAUWERE
// Last update Wed Jan 11 00:59:10 2017 Carl DEBRAUWERE
//

#include <string>
# include "Federation.hh"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp){
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = maxWarp;
  std::cout << "The ship USS "<< _name <<" has been finished. It is "<< this->_length <<" m in length and " << this->_width << " m in width." << std::endl << "It can go to Warp " << this->_maxWarp << "!" << std::endl;
}

Federation::Starfleet::Ship::~Ship(){
  
}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *c){
  std::cout << "USS " << _name << ": The core is set." << std::endl;
  this->_core = c;
}
void Federation::Starfleet::Ship::checkCore(){
  if (this->_core->checkReactor()->isStable())
    std::cout << "USS " << _name<<": The core is stable at the time." << std::endl;
  else if (!this->_core->checkReactor()->isStable())
    std::cout << "USS " << _name<<": The core is unstable at the time." << std::endl;
}

// No fleet 

Federation::Ship::Ship(int length, int width, std::string name){
  this->_length = length;
  this->_width = width;
  this->_name = name;
  std::cout << "The independant ship "<< name <<" just finished its construction. It is "<<length<<" m in length and "<< width <<" m in width." << std::endl;
}

Federation::Ship::~Ship(){
    
}

void Federation::Ship::setupCore(WarpSystem::Core *c){
  std::cout << _name << ": The core is set." << std::endl;
  this->_core = c;
}

void Federation::Ship::checkCore(){
  if (this->_core->checkReactor()->isStable())
    std::cout << _name<<": The core is stable at the time." << std::endl;
  else if (!this->_core->checkReactor()->isStable())
    std::cout << _name<<": The core is unstable at the time." << std::endl;
}
