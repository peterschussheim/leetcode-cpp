#include "LRUCache.hpp"

int LRUCache::get(int key) {
  auto found_iter = m_map.find(key);
  if (found_iter == m_map.end()) {
    // non-existant key
    return -1;
  }
  // move node for this key to list front
  m_list.splice(m_list.begin(), m_list, found_iter->second);

  return found_iter->second->second;
}

void LRUCache::put(int key, int value) {
  auto found_iter = m_map.find(key);

  // key exists
  if (found_iter != m_map.end()) {
    // move node for key to list head
    m_list.splice(m_list.begin(), m_list, found_iter->second);

    // update node value
    found_iter->second->second = value;
    return;
  }

  if (m_map.size() == m_capacity) {
    int key_to_delete = m_list.back().first;
    m_list.pop_back();
    m_map.erase(key_to_delete);
  }

  // create new node in head of list
  m_list.emplace_front(key, value);

  // set the key in map to the newly-inserted node
  m_map[key] = m_list.begin();
}