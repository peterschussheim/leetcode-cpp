#define CATCH_CONFIG_MAIN
#include "catch2/catch.hpp"

#include "TwoSum.hpp"

TEST_CASE("Two Sum") {
  TwoSum s;
  SECTION("Sample test") {
    vector<int> numbers{ 2, 7, 11, 15 };
    int target = 9;
    vector<int> ans{ 0, 1 };
    REQUIRE(s.twoSum(numbers, target) == ans);
  }
  SECTION("Have duplicate elements and the answer relies on duplicate elements") {
    vector<int> numbers{ 3, 3, 4 };
    int target = 6;
    vector<int> ans{ 0, 1 };
    REQUIRE(s.twoSum(numbers, target) == ans);
  }
  SECTION("Have duplicate elements and the answer doesn't rely on duplicate elements") {
    vector<int> numbers{ 3, 3, 4, 1 };
    int target = 5;
    vector<int> ans{ 2, 3 };
    REQUIRE(s.twoSum(numbers, target) == ans);
  }
}