//
// mainIntra.cpp for azd in /home/debrau_c/cours/piscine/cpp_d16/ex00
// 
// Made by Carl DEBRAUWERE
// Login   <debrau_c@epitech.net>
// 
// Started on  Thu Jan 19 10:07:11 2017 Carl DEBRAUWERE
// Last update Thu Jan 19 11:13:45 2017 Carl DEBRAUWERE
//

#include <iostream>

#include "Parser.h"

int main(){
    Parser p;

    p.feed("((12*2)+14)");
        std::cout << p.result() << std::endl;
    p.feed("((17 % 9) / 4)");
    std::cout << p.result() << std::endl;
    p.reset();
    p.feed("(17 - 4) * 13");
    std::cout << p.result() << std::endl;
    return 0;
}
