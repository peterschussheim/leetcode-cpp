#include "LRUCache.hpp"

int LRUCache::get(int key) {
  if (m_map.find(key) == m_map.end()) { return -1; }  // non-existant key

  m_list.splice(m_list.begin())
}