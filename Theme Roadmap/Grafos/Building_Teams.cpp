#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  int N, M; cin >> N >> M;
  vector<vector<int>> adj(N + 1);
  while (M--) {
    int u, v; cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  vector<bool> vis(N + 1);
  vector<int> col(N + 1, 0);
  // bipartite graph
  function<bool(int, int)> dfs = [&](int u, int c) {
    vis[u] = 1;
    col[u] = c;

    for (auto v : adj[u]) {
      if (vis[v] && col[u] == col[v]) return false;
      else if (!vis[v] && !dfs(v, c ^ 1)) return false;
    }
    return true;
  };

  for (int i = 1; i <= N; i++) {
    if (vis[i]) continue;
    if (dfs(i, 1) == false) {
      cout << "IMPOSSIBLE";
      return;
    }
  }

  for (int i = 1; i <= N; i++) cout << (col[i] ? 1 : 2) << ' ';
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