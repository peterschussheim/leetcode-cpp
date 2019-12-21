#include "ReverseLinkedList.hpp"
#include "catch2/catch.hpp"

TEST_CASE("Reverse Linked List") {
  ReverseLinkedList s;
  ListNode* l = nullptr;
  SECTION("4 -> 3 -> 2 -> 1-> null") {
    ListNode* _4 = new ListNode(4);
    _4->next = l;

    ListNode* _3 = new ListNode(3);
    _3->next = l;

    ListNode* _2 = new ListNode(2);
    _2->next = l;

    ListNode* _1 = new ListNode(1);
    _1->next = l;

    l = _1;
    l = s.reverseList(l);

    ListNode* n = l;

    REQUIRE_FALSE(n == nullptr);
    REQUIRE(n->val == 4);
    n = n->next;
    REQUIRE_FALSE(n == nullptr);
    REQUIRE(n->val == 3);
    n = n->next;
    REQUIRE_FALSE(n == nullptr);
    REQUIRE(n->val == 2);
    n = n->next;
    REQUIRE_FALSE(n == nullptr);
    REQUIRE(n->val == 1);
    n = n->next;
    REQUIRE(n == nullptr);
  }
  list_free(l);
}