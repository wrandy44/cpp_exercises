//
// Errors.cpp for ad in /home/debrau_c/cours/piscine/cpp_d14a/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 17 20:04:44 2017 Carl DEBRAUWERE
// Last update Wed Jan 18 09:37:15 2017 Carl DEBRAUWERE
//

#include "Errors.hpp"
//NasaError
NasaError::NasaError(std::string const &message,
		     std::string const &component){
  _message = message;
  _component = component;
}

const char *NasaError::what() const throw(){
  return _message.c_str();
}

std::string const &NasaError::getComponent() const{
  return _component;
}

//LifeCritical Error
LifeCriticalError::LifeCriticalError(std::string const &message,
				     std::string const &component):NasaError(message, component){
  _message = message;
  _component = component;
}

//Mission Critical Error
MissionCriticalError::MissionCriticalError(std::string const &message,
					   std::string const &component):NasaError(message, component){

}

//
UserError::UserError(std::string const &message,
		     std::string const &component):NasaError(message, component){}
//CommunicationE
CommunicationError::CommunicationError(std::string const &message):NasaError(message, "CommunicationDevice"){
}
