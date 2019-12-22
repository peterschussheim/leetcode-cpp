#include "LRUCache.hpp"
#include "catch2/catch.hpp"

TEST_CASE("LRU Cache") {
  LRUCache s(2);
  SECTION("Test 1") {
    REQUIRE(s.get(1) == -1);
    REQUIRE(s.get(2) == -1);

    s.put(1, 10);
    REQUIRE(s.get(1) == 10);
    REQUIRE(s.get(2) == -1);

    s.put(2, 20);
    REQUIRE(s.get(1) == 10);
    REQUIRE(s.get(2) == 20);

    s.put(3, 30);
    REQUIRE(s.get(1) == -1);
    REQUIRE(s.get(2) == 20);
    REQUIRE(s.get(3) == 30);

    s.get(2);
    s.put(4, 40);
    REQUIRE(s.get(1) == -1);
    REQUIRE(s.get(2) == 20);
    REQUIRE(s.get(3) == -1);
    REQUIRE(s.get(4) == 40);
  }
}
