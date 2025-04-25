#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  vector<int> keys(4);
  for (int& k : keys) cin >> k;
  int curr = 0;
  for (int i = 0; i < 3; i++) {
    if (keys[curr] == 0) {
      cout << "NO\n"; return;
    }
    curr = keys[curr];
  }
  cout << "YES\n";
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

// https://codeforces.com/contest/1709/problem/A