#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int N; cin >> N;
  int M = N-1;
  vector<vector<int>> adj(N+1);
  while (M--) {
    int u, v; cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  //dbg(adj);
  vector<int> dp(N+1);
  function<int(int, int)> dfs = [&](int u, int p) {
    if (adj[u].size() == 1 && adj[u][0] == p) {
      dp[u] = 1;
    } else {
      for (auto v : adj[u]) {
        if (v == p) continue;
        dp[u] += dfs(v, u);
      }
    }
    return dp[u];
  };
  dfs(1, -1);
  //dbg(dp);

  int Q; cin >> Q;
  while (Q--) {
    int x, y; cin >> x >> y;
    cout << 1LL * dp[x] * dp[y] << '\n';
  }
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