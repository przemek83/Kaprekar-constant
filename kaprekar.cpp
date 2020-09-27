#include "kaprekar.h"

#include <algorithm>
#include <array>

namespace Kaprekar
{
const unsigned int DIGITS_COUNT{4};
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

static std::array<unsigned int, DIGITS_COUNT> toArray(unsigned int number)
{
    std::array<unsigned int, DIGITS_COUNT> array{};
    for (size_t i = 0; i < DIGITS_COUNT; ++i)
    {
        array.at(i) = number % DECIMAL_BASE;
        number /= DECIMAL_BASE;
    }
    return array;
}

static unsigned int toNumber(std::array<unsigned int, DIGITS_COUNT> array)
{
    unsigned int number{0};
    for (auto num : array)
        number = number * DECIMAL_BASE + num;
    return number;
}

unsigned int countSteps(unsigned int number)
{
    unsigned int steps{0};
    const unsigned int magicNumber{6174};
    while (number != magicNumber)
    {
        std::array<unsigned int, DIGITS_COUNT> array{toArray(number)};
        std::sort(array.begin(), array.end());
        unsigned int ascendingNumber{toNumber(array)};
        number = reverseNumber(ascendingNumber) - ascendingNumber;
        steps++;
    }
    return steps;
}

bool isRepdigit(unsigned int number)
{
    const unsigned int repdigitDivider{1111};
    return number % repdigitDivider == 0;
}

}  // namespace Kaprekar
