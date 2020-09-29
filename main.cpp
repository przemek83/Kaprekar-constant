#include <iostream>

#include "kaprekar.h"

int main()
{
    unsigned int number{0};
    while (std::cin >> number)
    {
        if (Kaprekar::isRepdigit(number))
        {
            std::cout << "-1" << std::endl;
            continue;
        }
        std::cout << Kaprekar::countSteps(number) << std::endl;
    }
    return 0;
}
