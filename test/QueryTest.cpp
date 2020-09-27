#include "gtest/gtest.h"

#include "../kaprekar.h"

TEST(Kaprekar, isRepdigit) { EXPECT_EQ(Kaprekar::isRepdigit(1000), false); }
