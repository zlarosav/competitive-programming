#include <bits/stdc++.h>

using namespace std;

void solve() {
  vector<char> ans;
  for (size_t i = 0; i < 8; i++) {
    for (size_t j = 0; j < 8;j++) {
      char x; cin >> x;
      if (x != '.') ans.push_back(x);
    }
  }
  for (char& e : ans) cout << e;
  cout << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; 
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://codeforces.com/problemset/problem/1850/C