#define CATCH_CONFIG_MAIN
#include "catch.hpp"
using namespace std;

#include <string>
#include <map>

string forethought(int num)
{
    int left[] = {0, 1, 8, 16};
    int right[] = {0, 1, 8, 16};

    map<int, string> key = {
        {0, "4 - 4"}, {1, "4 / 4"}, {8, "4 + 4"}, {16, "4 * 4"}
    };

    // for left and right sides 0, 1, 8, 16 are possible values
    for (int i = 0; i < 4; ++i)
    {
        for (int j = 0; j < 4; ++j)
        {
            if (left[i] * right[j] == num)
            {
                key
            }

            if (left[i] / right[j] == num)
            {

            }

            if (left[i] + right[j] == num)
            {

            }

            if (left[i] + right[j] == num)
            {

            }
        }
    }

    return "no solution";
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