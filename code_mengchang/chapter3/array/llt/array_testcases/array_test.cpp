#include "gtest/gtest.h"

#include "array.h"

TEST(ArrayTest, Constructor) {
    HelloAlgo::Array array;
    const int initArrayCapacity = 10;
    EXPECT_EQ(array.capacity(), initArrayCapacity);
}

TEST(ArrayTest, Insert) {
    HelloAlgo::Array array;
    array.insert(0, 1);
    EXPECT_EQ(array.get(0), 1);
    EXPECT_EQ(array.size(), 1);

    array.insert(1, 2);
    EXPECT_EQ(array.get(1), 2);
    EXPECT_EQ(array.size(), 2);

    array.insert(0, 0);
    EXPECT_EQ(array.get(0), 0);
    EXPECT_EQ(array.size(), 3);
}

TEST(ArrayTest, Remove) {
    HelloAlgo::Array array;
    array.insert(0, 1);

    array.remove(0);
    EXPECT_EQ(array.size(), 0);
    const int initArrayCapacity = 10;
    EXPECT_EQ(array.capacity(), initArrayCapacity / 2);
    EXPECT_EQ(array.get(0), -1);
}

TEST(ArrayTest, Shrink) {
    HelloAlgo::Array array;
    array.insert(0, 1);
    array.shrink();
    EXPECT_EQ(array.capacity(), 5);
}
