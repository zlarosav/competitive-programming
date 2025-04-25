#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string s; getline(cin, s);
  stack<string> st;
  string curr = "";
  for (char ch : s) {
    if (ch == '(') {
      st.push(curr);
      curr = "";
    } else if (ch == ')') {
      reverse(curr.begin(), curr.end());
      if (!st.empty()) {
        curr = st.top() + curr;
        st.pop();
      }
    } else curr += ch;
  }
  cout << curr << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  cin.ignore();
  while (t--) {
    solve();
  }

  return 0;
}