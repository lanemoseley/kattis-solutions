#define CATCH_CONFIG_MAIN
#include "catch.hpp"

int friday(int dpy, int mpy, int dpm[])
{
    int fridays = 0;

    return fridays;
}

TEST_CASE("Given #1")
{
    int daysPerMonth[] = {20};
    int daysPerYear = 20;
    int monthsPerYear = 1;

    REQUIRE(friday(daysPerYear, monthsPerYear, daysPerMonth) == 1);
}

TEST_CASE("Given #2")
{
    int daysPerMonth[] = {21, 19};
    int daysPerYear = 40;
    int monthsPerYear = 2;

    REQUIRE(friday(daysPerYear, monthsPerYear, daysPerMonth) == 2);
}

TEST_CASE("Given #3")
{
    int daysPerMonth[] = {31 28 31 30 31 30 31 31 30 31 30 31};
    int daysPerYear = 365;
    int monthsPerYear = 12;

    REQUIRE(friday(daysPerYear, monthsPerYear, daysPerMonth) == 2);
}