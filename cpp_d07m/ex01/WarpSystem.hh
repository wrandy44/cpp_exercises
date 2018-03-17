//
// WarpSystem.hh for azd in /home/debrau_c/cours/piscine/cpp_d07m/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 10:36:45 2017 Carl DEBRAUWERE
// Last update Tue Jan 10 14:00:57 2017 Carl DEBRAUWERE
//

#ifndef WARPSYSTEM_HH
# define WARPSYSTEM_HH

namespace WarpSystem{
  class QuantumReactor{
    bool _stability;
  public:
    QuantumReactor();
    ~QuantumReactor();
    bool isStable();
    void setStability(bool);
  };
  class Core{
    QuantumReactor *_coreReactor;
  public:
    Core(QuantumReactor *qr);
    ~Core();
    QuantumReactor *checkReactor();
    
  };
}

#endif /* WARPSYSTEM_HH */
