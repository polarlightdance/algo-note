#include "gtest/gtest.h"

#include <iostream>
#include <streambuf>
#include <sstream>

class NullBuffer : public std::streambuf {
    public:
        int overflow(int c) override {
            return c; // 忽略所有输出
        }
    };

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    NullBuffer nullBuffer;
    std::streambuf* oldCoutBuffer = std::cout.rdbuf(&nullBuffer);

    int result = RUN_ALL_TESTS();

    std::cout.rdbuf(oldCoutBuffer);

    return result;
}
