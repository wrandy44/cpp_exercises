//
// Toy.cpp for ezsd in /home/debrau_c/cours/piscine/cpp_d13/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Mon Jan 16 09:32:25 2017 Carl DEBRAUWERE
// Last update Mon Jan 16 17:28:57 2017 Carl DEBRAUWERE
//

#include "string.h"
#include "Toy.h"


Toy::Toy(){

}
Toy::Toy(Toy::ToyType type, const std::string &name, const std::string &file){
  //  if (type == BASIC_TOY|| type == ALIEN)
  _type = type;
  _name = name;
  _picture = Picture(file);
}
//get
Toy::ToyType Toy::getType() const {
  return _type;
}
std::string Toy::getName() const {
  return _name;
}
std::string Toy::getAscii() const {
  return _picture.getData();
}
//set
bool Toy::setAscii(const std::string &file){
  if (_picture.getPictureFromFile(file)){
    return true;
  }
  e = "bad new illustration";
  return false; 
}
void Toy::setName(const std::string &name){
  _name = name;
}

Toy	Toy::operator=(const Toy &a){
  this->_picture = a._picture;
  this->_type = a._type;
  this->_name = a._name;
  return (*this);
}

Toy::Toy(const Toy &a){
  this->_picture = a._picture;
  this->_type = a._type;
  this->_name = a._name;
}

std::ostream &operator<<(std::ostream &f, const Toy &a){
  f << a.getName() << std::endl << a.getAscii() << std::endl;
  return f;
}

void operator<<(Toy &a, const std::string &str){
  a.setData(str);
}

Toy::Error Toy::getLastError(){
  Toy::Error s;

  s._what = e;
  if (e == "bad new illustration"){
    s._where = "setAscii";
    s.type = Toy::Error::PICTURE;
  }
  else if (e == "wrong mode"){
    s._where = "speak_es";
    s.type = Toy::Error::SPEAK;
  }
  else{
    s._where = "speak_es";
    s.type = Toy::Error::UNKNOWN;
  }
  return s;
}
