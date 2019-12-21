#include "ListNode.hpp"

int list_len(ListNode* head) {
  int length = 0;

  while (head != nullptr) {
    length += 1;
    head = head->next;
  }

  return length;
}

string list_serialize(ListNode* head) {
  string result = "";

  while (head != nullptr) {
    result += to_string(head->val) + " ";
    head = head->next;
  }

  return result;
}

void list_free(ListNode* head) {
  while (head != nullptr) {
    ListNode* temp = head;
    head = head->next;
    delete temp;
  }
}