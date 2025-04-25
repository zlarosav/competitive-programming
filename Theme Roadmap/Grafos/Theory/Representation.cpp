#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  int n, q; cin >> n >> q;
  vector<vector<int>> edges(n);
  for (int i = 0; i < n; i++) {
    int u, v, w; cin >> u >> v >> w;
    edges[i] = {u, v, w};
  }
  dbg(edges);
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