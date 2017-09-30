#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "Skeleton.h"
#include <random>
#include <iostream>

TEST_CASE("Test booh")
{
    Skeleton skeleton;

    CHECK_EQ(skeleton.booh(), "ha!");
}

TEST_CASE("Force ASAN heap-buffer-overflow")
{
    int* buffer = new int(9);

    buffer[8] = 42;

    std::random_device rd;
    std::mt19937 mt(rd());
    std::uniform_int_distribution<int> dist(10, 11);

    std::cout << buffer[dist(mt)] << std::endl;

    delete [] buffer;
}

