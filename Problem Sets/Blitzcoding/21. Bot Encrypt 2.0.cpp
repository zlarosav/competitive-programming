#include <bits/stdc++.h>
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
    } else {
      curr += ch;
    }
  }
  cout << curr << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t;
  cin >> t;
  cin.ignore();

  while (t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/21