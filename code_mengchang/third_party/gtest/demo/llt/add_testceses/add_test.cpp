#include <gtest/gtest.h>

#include "add.h"  // 包含加法函数的实现

// 测试加法函数
TEST(AddTest, PositiveNumbers) {
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_EQ(add(5, 7), 12);
}

TEST(AddTest, NegativeNumbers) {
    EXPECT_EQ(add(-1, -2), -3);
    EXPECT_EQ(add(-5, -7), -12);
}

TEST(AddTest, MixedNumbers) {
    EXPECT_EQ(add(-1, 2), 1);
    EXPECT_EQ(add(5, -7), -2);
}
