#define CATCH_CONFIG_MAIN
#include <vector>
#include "catch.hpp"
using namespace std;

int friday(int dpy, int mpy, vector<int> &dpm)
{
    int firstDay = 1;
    int fridays = 0;

    for (int i = 0; i < mpy; ++i)
    {
        // if first day doesn't fall on sunday return 0, else return 1
        if (firstDay == 1 && dpm[i] > 12)
            fridays += 1;
        
        firstDay = (firstDay + dpm[i]) % 7;
    }

    return fridays;
}

TEST_CASE("Given #1")
{
    vector<int> daysPerMonth{20};
    int daysPerYear = 20;
    int monthsPerYear = 1;

    REQUIRE(friday(daysPerYear, monthsPerYear, daysPerMonth) == 1);
}

TEST_CASE("Given #2")
{
    vector<int> daysPerMonth{21, 19};
    int daysPerYear = 40;
    int monthsPerYear = 2;

    REQUIRE(friday(daysPerYear, monthsPerYear, daysPerMonth) == 2);
}

TEST_CASE("Given #3")
{
    vector<int> daysPerMonth{31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int daysPerYear = 365;
    int monthsPerYear = 12;

    REQUIRE(friday(daysPerYear, monthsPerYear, daysPerMonth) == 2);
}