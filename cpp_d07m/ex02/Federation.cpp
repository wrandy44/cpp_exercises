//
// Federation.cpp for azd in /home/debrau_c/cours/piscine/cpp_d07m/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 10:25:48 2017 Carl DEBRAUWERE
// Last update Wed Jan 11 01:00:28 2017 Carl DEBRAUWERE
//

#include <string>
# include "Federation.hh"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp){
  this->_length = length;
  this->_width = width;
  this->_name = name;
  this->_maxWarp = maxWarp;
  _home = _location = EARTH;
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

void Federation::Starfleet::Ship::promote(Captain *capt){
  std::cout << capt->getName() << ": I'm glad to be the captain of the USS "<< _name<<"." << std::endl;
}

bool Federation::Starfleet::Ship::move(int warp, Destination d){
  Destination save;
  save = this->_location;
  this->_location = d;
  if (warp <= _maxWarp && d != _location) return true;
  if (_core->checkReactor()->isStable() == true) return true;
  this->_location = save;
  return false;
}
bool Federation::Starfleet::Ship::move(int warp){
  Destination save;
  save = this->_location;
  this->_location = _home;
  if (warp <= _maxWarp) return true;
  if (_core->checkReactor()->isStable() == true) return true;
  this->_location = save;
  return false;
}
bool Federation::Starfleet::Ship::move(Destination d){
  Destination save;
  save = this->_location;
  this->_location = d;
  if (_core->checkReactor()->isStable() == true) return true;
  if (d != _location) return true;
  this->_location = save;
  return false;
}
bool Federation::Starfleet::Ship::move(){
  Destination save;
  save = this->_location;
  this->_location = _home;
  if (_core->checkReactor()->isStable() == true) return true;
  this->_location = save;
  return false;
}

// no fleet
Federation::Ship::Ship(int length, int width, std::string name){
  this->_length = length;
  this->_width = width;
  this->_name = name;
  _home = _location = VULCAN;
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

bool Federation::Ship::move(int warp, Destination d){
  Destination save;
  save = this->_location;
  this->_location = d;
  if (warp <= _maxWarp && d != _location) return true;
  if (_core->checkReactor()->isStable() == true) return true;
  this->_location = save;
  return false;
}
bool Federation::Ship::move(int warp){
  Destination save;
  save = this->_location;
  this->_location = _home;
  if (warp <= _maxWarp) return true;
  if (_core->checkReactor()->isStable() == true) return true;
  this->_location = save;
  return false;
}
bool Federation::Ship::move(Destination d){
  Destination save;
  save = this->_location;
  this->_location = d;
  if (_core->checkReactor()->isStable() == true) return true;
  if (d != _location) return true;
  this->_location = save;
  return false;
}
bool Federation::Ship::move(){
  Destination save;
  save = this->_location;
  this->_location = _home;
  if (_core->checkReactor()->isStable() == true) return true;
  this->_location = save;
  return false;
}
// Captain

Federation::Starfleet::Captain::Captain(std::string n){_name = n;}
Federation::Starfleet::Captain::~Captain(){}
std::string Federation::Starfleet::Captain::getName(){return _name;}
int Federation::Starfleet::Captain::getAge(){return _age;}
void Federation::Starfleet::Captain::setAge(int a){_age = a;}

// Ensign
Federation::Starfleet::Ensign::Ensign(std::string str){
  std::cout << "Ensign "<< str <<", awaiting orders." << std::endl;
  _name = str;
}

Federation::Starfleet::Ensign::~Ensign(){}
