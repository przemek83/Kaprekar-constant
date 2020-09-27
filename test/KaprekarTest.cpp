#include "gtest/gtest.h"

#include "../kaprekar.h"

TEST(Kaprekar, isRepdigitNegative)
{
    EXPECT_EQ(Kaprekar::isRepdigit(1000), false);
    EXPECT_EQ(Kaprekar::isRepdigit(5554), false);
    EXPECT_EQ(Kaprekar::isRepdigit(5556), false);
    EXPECT_EQ(Kaprekar::isRepdigit(9998), false);
}

TEST(Kaprekar, isRepdigitPositive)
{
    EXPECT_EQ(Kaprekar::isRepdigit(1111), true);
    EXPECT_EQ(Kaprekar::isRepdigit(5555), true);
    EXPECT_EQ(Kaprekar::isRepdigit(9999), true);
}

TEST(Kaprekar, countSteps)
{
    EXPECT_EQ(Kaprekar::countSteps(6174), 0);
    EXPECT_EQ(Kaprekar::countSteps(4223), 3);
    EXPECT_EQ(Kaprekar::countSteps(2088), 2);
    EXPECT_EQ(Kaprekar::countSteps(8532), 1);
    EXPECT_EQ(Kaprekar::countSteps(1112), 5);
}
