//
// Borg.hh for ad in /home/debrau_c/cours/piscine/cpp_d07m/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 13:31:30 2017 Carl DEBRAUWERE
// Last update Tue Jan 10 14:06:19 2017 Carl DEBRAUWERE
//

#ifndef BORG_HH
# define BORG_HH

# include "WarpSystem.hh"

namespace Borg{
  class Ship{
    int _side;
    short _maxWrap;
    WarpSystem::Core *_core;
  public:
    Ship();
    ~Ship();
    void setupCore(WarpSystem::Core *);
    void checkCore();
  };
}

#endif /* */
