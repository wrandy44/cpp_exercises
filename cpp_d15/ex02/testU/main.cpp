
#include "ex02.hpp"
#include <iostream>

using namespace std;
int	main()
{
  {
    int		t1[5] = { -654, 43, 56, -56 };
    int		t2[1] = { 42 };
    int		t3[2] = { 4543534, 234233 };
    float	t4[4] = {1.3, 4.8, 3.2, 1.8 };
    std::cout << ::templateMin(t1, 5) << std::endl;
    std::cout << ::templateMin(t2, 1) << std::endl;
    std::cout << ::templateMin(t3, 2) << std::endl;
    std::cout << ::templateMin(t4, 4) << std::endl;

    std::cout << std::endl;

    std::cout << ::nonTemplateMin(t1, 5) << std::endl;
    std::cout << ::nonTemplateMin(t2, 1) << std::endl;
    std::cout << ::nonTemplateMin(t3, 2) << std::endl;
    }/*
  int tab[2] = {3, 0};
  int minimum = templateMin(tab, 2);

  cout << "templateMin(tab, 2) = " << minimum << endl;
  minimum = nonTemplateMin(tab, 2);
  cout << "nonTemplateMin(tab, 2) = " << minimum << endl;*/
}
