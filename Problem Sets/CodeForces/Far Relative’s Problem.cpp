#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  vector<pair<int, int>> m, f;
  for (int i = 0; i < n; i++) {
    char t; int a, b; cin >> t >> a >> b;
    if (t == 'M') m.push_back({a, b});
    else f.push_back({a, b});
  }
  
  int mx = 0;
  for (int i = 1; i <= 366; i++) {
    int curr = 0;
    int males = 0;
    for (auto x : m) {
      if (x.first <= i && i <= x.second) males++;
    }
    int females = 0;
    for (auto x : f) {
      if (x.first <= i && i <= x.second) females++;
    }
    curr = min(males, females) * 2;
    mx = max(curr, mx);
  }
  cout << mx;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://codeforces.com/problemset/problem/629/B