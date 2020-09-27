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
