//
// Errors.cpp for ad in /home/debrau_c/cours/piscine/cpp_d14a/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 17 20:04:44 2017 Carl DEBRAUWERE
// Last update Tue Jan 17 20:35:58 2017 Carl DEBRAUWERE
//

#include "Errors.hpp"
//NasaError
NasaError::NasaError(std::string const &message,
		     std::string const &component){
  _message = message;
  _component = component;
}

std::string const &NasaError::what() const{
  return _message;
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
MissionCriticalError::~MissionCriticalError(){

}
//
UserError::UserError(std::string const &message,
		     std::string const &component):NasaError(message, component){}
//CommunicationE
CommunicationError::CommunicationError(std::string const &message):NasaError(message, "CommunicationDevice"){
}
