#include "gtest/gtest.h"

#include <src/Kaprekar.h>

TEST(Kaprekar, isRepdigitNegative)
{
    EXPECT_EQ(kaprekar::isRepdigit(1000), false);
    EXPECT_EQ(kaprekar::isRepdigit(5554), false);
    EXPECT_EQ(kaprekar::isRepdigit(5556), false);
    EXPECT_EQ(kaprekar::isRepdigit(9998), false);
}

TEST(Kaprekar, isRepdigitPositive)
{
    EXPECT_EQ(kaprekar::isRepdigit(1111), true);
    EXPECT_EQ(kaprekar::isRepdigit(5555), true);
    EXPECT_EQ(kaprekar::isRepdigit(9999), true);
}

TEST(Kaprekar, countSteps)
{
    EXPECT_EQ(kaprekar::countSteps(6174), 0);
    EXPECT_EQ(kaprekar::countSteps(4223), 3);
    EXPECT_EQ(kaprekar::countSteps(2088), 2);
    EXPECT_EQ(kaprekar::countSteps(8532), 1);
    EXPECT_EQ(kaprekar::countSteps(1112), 5);
}
