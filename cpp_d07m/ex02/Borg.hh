//
// Borg.hh for ad in /home/debrau_c/cours/piscine/cpp_d07m/ex01
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 13:31:30 2017 Carl DEBRAUWERE
// Last update Tue Jan 10 17:03:25 2017 Carl DEBRAUWERE
//

#ifndef BORG_HH
# define BORG_HH

# include "WarpSystem.hh"
# include "Destination.hh"
namespace Borg{
  class Ship{
    int _side;
    short _maxWarp;
    WarpSystem::Core *_core;
    Destination _home, _location;
  public:
    Ship();
    ~Ship();
    void setupCore(WarpSystem::Core *);
    void checkCore();
    bool move(int warp, Destination d); // move _location to d
    bool move(int warp); // move _location to _home
    bool move(Destination d); // move _location to d
    bool move(); // move _location to _ho
  };
}

#endif /* */
