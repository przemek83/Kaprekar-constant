// In:
// Lines containing 4 digit numbers to check.

// Out:
// Number of steps to reach 6174 or -1 if it is not possible to reach it.

// In example:
// 6174
// 4223
// 2088
// 8532
// 1112
// 1111

// Out example:
// 0
// 3
// 2
// 1
// 5
// -1

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
