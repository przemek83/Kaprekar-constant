// In:
// In first line numbers to check count. After that 4 digit numbers to check

// Out:
// Number of steps to reach 6174 or -1 if it is not possible to reach it.

// In example:
// 5
// 6174
// 4223
// 2088
// 8532
// 1112

// Out example:
// 0
// 3
// 2
// 1
// 5

#include "kaprekar.h"

int main()
{
    using namespace Kaprekar;

    unsigned int testCount;
    std::cin >> testCount;
    for (unsigned int i = 0; i < testCount; ++i)
    {
        unsigned int number{0};
        std::cin >> number;

        if (isRepdigit(number))
        {
            std::cout << "-1" << std::endl;
            continue;
        }

        std::cout << countSteps(number) << std::endl;
    }

    return 0;
}
