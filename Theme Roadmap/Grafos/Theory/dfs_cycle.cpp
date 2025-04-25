#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int N, M; cin >> N >> M;
  vector<vector<int>> adj(N+1);
  while (M--) {
    int u, v; cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  vector<int> vis(N+1);
  vector<int> parent(N+1);
  
  function<bool(int)> dfs = [&](int u) {
    vis[u] = 1;
    
    for (auto v : adj[u]) {
      if (parent[u] == v) continue;
      if (vis[v] == 1) return true;
      parent[v] = u;
      dfs(v);
    }

    return false;
  };

  for (int i = 0; i < N; i++) {
    if (vis[i] == 1) continue;
    if (!dfs(i)) {
      dbg(vis, parent);
      cout << "YES";
      return;
    };
  }
  cout << "NO";
  
  //for (int x : ans) cout << x << ' ';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  //cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
