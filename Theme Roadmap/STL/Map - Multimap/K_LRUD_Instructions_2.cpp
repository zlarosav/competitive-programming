#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  int n; cin >> n;
  pair<int, int> init = {0, 0};
  map<pair<int, int>, bool> vis = {{init, 1}};
  map<char, pair<int, int>> movs = {{'R', {0, 1}}, {'L', {0, -1}}, {'U', {1, 0}}, {'D', {-1, 0}}};
  for (int i = 0; i < n; i++) {
    char curr; cin >> curr;
    init.first += movs[curr].first;
    init.second += movs[curr].second;
    if (vis.count(init)) {
      cout << "Yes";
      return;
    }
    vis[init] = 1;
  }
  cout << "No";
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