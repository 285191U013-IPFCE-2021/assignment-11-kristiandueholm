#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}

// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail")
{
    // General test
    REQUIRE(sumtail(5, 0) == sum(5));
    // Edge cases
    REQUIRE(sumtail(1, 0) == sum(1));
    REQUIRE(sumtail(100, 0) == 5050);
    REQUIRE(sumtail(1000, 0) == 500500);

}

TEST_CASE("sumwhile")
{
    // General test
    REQUIRE(sumtail(5, 0) == sum(5));
    // Edge cases
    REQUIRE(sumtail(1, 0) == sum(1));
    REQUIRE(sumtail(100, 0) == 5050);
    REQUIRE(sumtail(1000, 0) == 500500);
}

TEST_CASE("sumn")
{
    REQUIRE(sumn(1)==1); // sum(1) must be 1
    REQUIRE(sumn(3)==9); //sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33)==1089); //sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{
    REQUIRE(fib(1, 1, 1) == 1);
    REQUIRE(fib(5, 1, 1) == 5);
    REQUIRE(fib(20, 1, 1) == 6765);
    REQUIRE(fib(28, 1, 1) == 317811);
}