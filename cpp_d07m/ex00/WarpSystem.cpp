//
// WarpSystem.cpp for zd in /home/debrau_c/cours/piscine/cpp_d07m/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 11:09:25 2017 Carl DEBRAUWERE
// Last update Tue Jan 10 16:37:19 2017 Carl DEBRAUWERE
//

#include "WarpSystem.hh"

WarpSystem::QuantumReactor::QuantumReactor():_stability(true){}
WarpSystem::QuantumReactor::~QuantumReactor(){}
bool WarpSystem::QuantumReactor::isStable(){return this->_stability;}
void WarpSystem::QuantumReactor::setStability(bool x){this->_stability = x;}
WarpSystem::Core::Core(QuantumReactor *q){_coreReactor = q;}
WarpSystem::Core::~Core(){}
WarpSystem::QuantumReactor *WarpSystem::Core::checkReactor(){return this->_coreReactor;}
