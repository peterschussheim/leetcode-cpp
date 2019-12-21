#include "ReverseLinkedList.hpp"

ListNode* ReverseLinkedList::reverseList(ListNode* head) {
  ListNode* reversed = nullptr;
  ListNode* current = head;
  ListNode* next;

  while (current != nullptr) {
    next = current->next;
    current->next = reversed;
    reversed = current;
    current = next;
  }

  return reversed;
}