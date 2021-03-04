
#include <iostream>
#include "Helpers.h"




int main()
{
   
    setlocale(LC_ALL, "Rus");

    int a;
    int b;

    std::cout << "введите число 1: ";
    std::cin >> b;
    std::cout << "введите число 2: ";
    std::cin >> a;
   
  int с = summa(a, b);
    
   
    std::cout << "квадрат суммы " << с << std::endl;
}

