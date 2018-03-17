//
// Federation.hh for azd in /home/debrau_c/cours/piscine/cpp_d07m/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 10:21:44 2017 Carl DEBRAUWERE
// Last update Tue Jan 10 17:06:00 2017 Carl DEBRAUWERE
//

#ifndef FEDERATION_STARFLEET_H
# define FEDERATION_STARFLEET_H

# include <string>
# include <iostream>
# include "WarpSystem.hh"
# include "Destination.hh"

namespace Federation{
  namespace Starfleet{
    //Captain
    class Captain{
      std::string _name;
      int _age;
    public:
      Captain(std::string);
      ~Captain();
      std::string getName();
      int getAge();
      void setAge(int);
    };
    //Ship
    class Ship{
      int		_length;
      int		_width;
      std::string	_name;
      short		_maxWarp;
      WarpSystem::Core		*_core;
      Captain		*capt;
      Destination _home, _location;
    public:
      Ship(int length, int width, std::string name, short maxWarp);
      ~Ship();
      void setupCore(WarpSystem::Core *);
      void checkCore();
      void promote(Captain *);
      //ex02
      bool move(int warp, Destination d); // move _location to d
      bool move(int warp); // move _location to _home
      bool move(Destination d); // move _location to d
      bool move(); // move _location to _ho
    };
    //Ensign
    class Ensign{
      std::string _name;
    public:
      explicit Ensign(std::string str);
      ~Ensign();
    };
  }
  class Ship{
    int		_length;
    int		_width;
    std::string	_name;
    short		_maxWarp;
    WarpSystem::Core		*_core;
    Destination _home, _location;
  public:
    Ship(int length, int width, std::string name);
    ~Ship();
    void setupCore(WarpSystem::Core *);
    void checkCore();
    //ex02
    bool move(int warp, Destination d); // move _location to d
    bool move(int warp); // move _location to _home
    bool move(Destination d); // move _location to d
    bool move(); // move _location to _ho
  };
}

#endif /* */
