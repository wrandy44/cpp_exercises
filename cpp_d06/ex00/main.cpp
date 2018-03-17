//
// main.cpp for azad in /home/debrau_c/cours/piscine/cpp_d06/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Mon Jan  9 09:20:18 2017 Carl DEBRAUWERE
// Last update Tue Jan 10 01:42:27 2017 Carl DEBRAUWERE
//

#include <iostream>
#include <fstream>
#include <string>

int file_not_found(std::string nameFile){
  std::cerr << "my_cat: " << nameFile<< ": No such file or directory" << std::endl;
  return 1;
}

int usage(std::string name){
  std::cout << "my_cat: Usage: " + name + " file [...]" << std::endl;
  return 1;
}

int main(int argc, char **argv){
  if (argc < 2) return usage(std::string(argv[0]));
  for (int i = 1; i < argc; i++){
    std::ifstream file(argv[i], std::ios::in);
    if (file.is_open()){
        char c;
	while(file.get(c)){
	  std::cout << c;
	}
      file.close();
    }
    else file_not_found(argv[i]);
  }
  return 0;
}
