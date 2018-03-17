//
// Picture.cpp for az in /home/debrau_c/cours/piscine/cpp_d13/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Mon Jan 16 09:46:42 2017 Carl DEBRAUWERE
// Last update Tue Jan 17 00:12:49 2017 Carl DEBRAUWERE
//

#include <fstream>
#include "Picture.h"

bool Picture::getPictureFromFile(const std::string &s){
  std::ifstream ifs(s.c_str(), std::ios::in);
  _data ="";
  if (ifs.is_open()){

    char c;
    while (ifs.get(c)){
      _data += c;
    }
    ifs.close();
    return true;
  }
  _data = "ERROR";
  return false;
}

Picture::Picture(const std::string &fn){
  getPictureFromFile(fn);
}

Picture::Picture(){
  _data = "";
}

Picture::~Picture(){

}

Picture::Picture(const Picture &a){
  _data = a._data;
}

Picture &Picture::operator=(const Picture &a){
  this->_data = a._data;
  return *this;
}


