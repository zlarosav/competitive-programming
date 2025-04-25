#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  // matriz de adj
  int N; cin >> N; // idx-0
  vector<vector<int>> mtz(N, vector<int>(N));
  for (auto& v : mtz) for (auto& x : v) cin >> x;
  
  vector<bool> vis(N);
  function<void(int)> dfs = [&](int u) {
    vis[u] = 1;

    for (int i = 0; i < N; i++) {
      if (i == u || vis[i] || !mtz[u][i]) continue;
      dfs(i);
    }
  };

  int comp = 0;
  for (int i = 0; i < N; i++) {
    if (vis[i]) continue;
    dfs(i);
    comp++;
  }

  cout << comp;
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