//
// Skat.hh for azd in /home/debrau_c/cours/piscine/cpp_d07a/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Tue Jan 10 17:18:08 2017 Carl DEBRAUWERE
//

#ifndef SKAT_HH
# define SKAT_HH
# include <string>

class Skat{
private:
  std::string _name;
  int _stimPaks;
 public:
  Skat(std::string const& name = "bob", int stimPaks = 15);
  ~Skat();
  int &stimPaks();
  const std::string& name();
  void shareStimPaks(int number, int &stock);
  void addStimPaks(unsigned int number);
  void useStimPaks();
  void status();
};
#endif /* */
