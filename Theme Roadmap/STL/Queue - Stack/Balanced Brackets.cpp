#include <bits/stdc++.h>

using namespace std;

void solve() {
  string cd; cin >> cd;
  stack<char> b;
  for (char& c : cd) {
    if (c == '{' || c == '[' || c == '(') b.push(c);
    else {
      if (b.empty()) {
        cout << "NO" << '\n'; return;
      }
      if (c == '}' && b.top() == '{') b.pop();
      else if (c == ']' && b.top() == '[') b.pop();
      else if (c == ')' && b.top() == '(') b.pop();
      else {
        cout << "NO" << '\n'; return;
      }
    }
  }
  cout << (b.empty() ? "YES" : "NO") << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://www.hackerrank.com/challenges/balanced-brackets/problem