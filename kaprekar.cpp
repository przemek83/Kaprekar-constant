#include "kaprekar.h"

namespace Kaprekar
{
const unsigned int DIGITS_COUNT{4};
static const unsigned int DECIMAL_BASE{10};

unsigned int reverseNumber(unsigned int number)
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

void toArray(unsigned int number, std::array<unsigned int, DIGITS_COUNT>& array)
{
    for (size_t i = 0; i < DIGITS_COUNT; ++i)
    {
        array.at(i) = number % DECIMAL_BASE;
        number /= DECIMAL_BASE;
    }
}

unsigned int toNumber(const std::array<unsigned int, DIGITS_COUNT>& array)
{
    unsigned int number{0};
    for (auto num : array)
        number = number * DECIMAL_BASE + num;
    return number;
}

unsigned int countSteps(unsigned int number)
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

bool isRepdigit(unsigned int number) { return number % 1111 == 0; }

}  // namespace Kaprekar
