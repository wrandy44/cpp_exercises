//
// Federation.hh for azd in /home/debrau_c/cours/piscine/cpp_d07m/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 10:21:44 2017 Carl DEBRAUWERE
// Last update Tue Jan 10 12:00:20 2017 Carl DEBRAUWERE
//

#ifndef FEDERATION_STARFLEET_H
# define FEDERATION_STARFLEET_H

# include <string>
# include <iostream>
# include "WarpSystem.hh"
namespace Federation{
  namespace Starfleet{
    class Ship{
      int		_length;
      int		_width;
      std::string	_name;
      short		_maxWarp;
      WarpSystem::Core		*_core;
    public:
      Ship(int length, int width, std::string name, short maxWarp);
      ~Ship();
      void setupCore(WarpSystem::Core *);
      void checkCore();
    };
  }
  class Ship{
    int		_length;
    int		_width;
    std::string	_name;
    short		_maxWarp;
    WarpSystem::Core		*_core;
  public:
    Ship(int length, int width, std::string name);
    ~Ship();
    void setupCore(WarpSystem::Core *);
    void checkCore();
  };
}

#endif /* */
