//
// main.cpp<cpp_d13> for azd in /home/debrau_c/cours/piscine/cpp_d13/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Mon Jan 16 10:12:03 2017 Carl DEBRAUWERE
// Last update Mon Jan 16 20:27:43 2017 Carl DEBRAUWERE
//

#include <iostream>
#include "Toy.h"
#include "Buzz.h"
#include "Woody.h"

int main(){

  /*
  Toy *b = new Buzz("buzziiiii");
  Toy *w = new Woody("wood");
  Toy *t = new Toy(Toy::ALIEN, "ET", "alien.txt");
  b->speak("To the code, and beyond !!!!!!!!");
  w->speak("There’s a snake in my boot.");
  t->speak("the claaaaaaw");*/
  /*
  Toy a(Toy::BASIC_TOY, "REX", "rex.txt");
  std::cout << a;
  a << "\\o/";
  std::cout << a;*/
    /*Toy toto;

  Buzz b(Toy::ALIEN, "buzzy");
  toto.setName("TOTO !");

  std::cout << "Buzzy :: :: " <<std::endl << b.getAscii() << std::endl;
  if (toto.getType() == Toy::BASIC_TOY)
    std::cout << "basic toy: " << toto.getName() << std::endl
	      << toto.getAscii() << std::endl;
  if (ET.getType() == Toy::ALIEN)
    std::cout << "othis alien is: " << ET.getName() << std::endl
	      << ET.getAscii() << std::endl;
  Buzz _b(Toy::BUZZ, "buzzy", "buzz.txt");
  _b.speak("LOOOOL");
  Woody _w(Toy::BUZZ, "buzzy", "buzz.txt");
  _w.speak("LOOOOL");
  ET.speak("XDD");*/

  Woody w("wood");  
  if (w.setAscii("file_who_does_not_exist.txt") == false)
    {
      Toy::Error e = w.getLastError();
      if (e.type == Toy::Error::PICTURE)
	std::cout << "Error in " << e.where() << ": " << e.what() << std::endl;
    }
  if (w.speak_es("Woody does not have spanish mode") == false)
    {
      Toy::Error e = w.getLastError();
      if (e.type == Toy::Error::SPEAK)
	std::cout << "Error in " << e.where() << ": " << e.what() << std::endl;
    }
  if (w.speak_es("Woody does not have spanish mode") == false)
    {
      Toy::Error e = w.getLastError();
      if (e.type == Toy::Error::SPEAK)
	std::cout << "Error in " << e.where() << ": " << e.what() << std::endl;
    }
  return 1337;
}
