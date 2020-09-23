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

#include <algorithm>
#include <array>
#include <cmath>
#include <cstdlib>
#include <iostream>

static const unsigned int DIGITS_COUNT{4};
static const unsigned int DECIMAL_BASE{10};

static unsigned int reverseNumber(unsigned int number)
{
    unsigned int reverse{0};
    unsigned int reminder{0};
    for (unsigned int i = 0; i < DIGITS_COUNT; ++i)
    {
        reminder = number % DECIMAL_BASE;
        reverse = reverse * DECIMAL_BASE + reminder;
        number /= DECIMAL_BASE;
    }
    return reverse;
}

static void toArray(unsigned int number,
                    std::array<unsigned int, DIGITS_COUNT>& array)
{
    for (size_t i = 0; i < DIGITS_COUNT; ++i)
    {
        array.at(i) = number % DECIMAL_BASE;
        number /= DECIMAL_BASE;
    }
}

static unsigned int toNumber(
    const std::array<unsigned int, DIGITS_COUNT>& array)
{
    unsigned int number{0};
    for (auto num : array)
        number = number * DECIMAL_BASE + num;
    return number;
}

static unsigned int countSteps(unsigned int number)
{
    unsigned int steps{0};
    std::array<unsigned int, DIGITS_COUNT> array{};
    const unsigned int magicNumber{6174};
    while (number != magicNumber)
    {
        toArray(number, array);
        std::sort(array.begin(), array.end());
        unsigned int ascendingNumber{toNumber(array)};
        number = reverseNumber(ascendingNumber) - ascendingNumber;
        steps++;
    }
    return steps;
}

static bool isRepdigit(unsigned int number) { return number % 1111 == 0; }

int main()
{
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
