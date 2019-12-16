#include "ValidParentheses.hpp"
#include <map>
#include <stack>

bool ValidParentheses::isValid(string s) {
  std::map<char, char> symbolMap = { { ')', '(' }, { ']', '[' }, { '}', '{' } };
  std::stack<char> st;

  for (int i = 0; i < s.size(); i++) {
    char currentSymbol = s[i];
    if (symbolMap.count(currentSymbol) > 0) {
      char top = st.top();
      st.pop();

      if (symbolMap[currentSymbol] != top) { return false; }
    } else {
      st.push(currentSymbol);
    }
  }

  return st.size() == 0;
}