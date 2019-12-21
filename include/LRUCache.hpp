#pragma once

#include <list>
#include <unordered_map>

class LRUCache {
private:
  size_t m_capacity;
  std::unordered_map<int, std::list<std::pair<int, int>>::iterator> m_map;
  std::list<std::pair<int, int>> m_list;

public:
  LRUCache(size_t capacity) : m_capacity(capacity) {}
  int get(int key);
  void put(int key, int value);
};