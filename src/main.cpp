#include <iostream>

#include "Kaprekar.h"

int main()
{
    unsigned int number{0};
    while (std::cin >> number)
    {
        if (kaprekar::isRepdigit(number))
            std::cout << "-1" << "\n";
        else
            std::cout << kaprekar::countSteps(number) << "\n";
    }
    return 0;
}
