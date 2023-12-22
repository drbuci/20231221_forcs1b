// not done
#define CATCH_CONFIG_MAIN
#include <catch2/catch.hpp>

#include "cs1blib.h"

/*
TEST_CASE("Factorials are computed", "[factorial]")
{
    REQUIRE(factorial(0) == 1);
    REQUIRE(factorial(1) == 1);
    REQUIRE(factorial(2) == 2);
    REQUIRE(factorial(3) == 6);
    REQUIRE(factorial(10) == 3628800);
}
*/

double arr[] = {80, 90};
double arrr[] = {73, 85, 64};
int siz = 2;

TEST_CASE("Average is computed", "[gradeAverage]") {
  REQUIRE(gradeAverage(arr, siz) == 85);
  REQUIRE(gradeAverage(arrr, siz+1) == 74);
}
