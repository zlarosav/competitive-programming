#include <bits/stdc++.h>

using namespace std;

int main() {
  int casos; cin >> casos;
  while (casos--) {
    string s; cin >> s;
    stack<char> q;
    for (char curr : s) {
      if (curr == '}' || curr == ']' || curr == ')') {
        if (q.empty() || (curr == '}' && q.top() != '{') || 
        (curr == ')' && q.top() != '(') || 
        (curr == ']' && q.top() != '[')) {
          cout << "NO" << endl;
          return;
        }
        q.pop();
      } else {
        q.push(curr);
      }
    }
    
    if (q.empty()) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}