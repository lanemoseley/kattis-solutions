#define CATCH_CONFIG_MAIN
#include <string>
#include "catch.hpp"
using namespace std;

string forethought(int num)
{
    string result = "";
    return result;
}

TEST_CASE("Given #1")
{
    string expected = "4 + 4 + 4 / 4 = 9";
    int input = 9;

    REQUIRE(forethought(input) == expected);
}

TEST_CASE("Given #2")
{
    string expected = "4 * 4 - 4 * 4 = 0";
    int input = 0;
    
    REQUIRE(forethought(input) == expected);
}

TEST_CASE("Given #3")
{
    string expected = "4 + 4 - 4 / 4 = 7";
    int input = 7;

    REQUIRE(forethought(input) == expected);
}

TEST_CASE("Given #4")
{
    string expected = "no solution";
    int input = 11;

    REQUIRE(forethought(input) == expected);
}

TEST_CASE("Given #5")
{
    string expected = "4 * 4 + 4 + 4 = 24";
    int input = 24;

    REQUIRE(forethought(input) == expected);
}