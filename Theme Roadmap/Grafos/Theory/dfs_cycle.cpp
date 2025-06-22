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
  vector<bool> vis(N+1);
  vector<int> parent(N+1);
  
  bool isCycle = false;
  function<void(int)> dfs = [&](int u) {
    vis[u] = 1;
    
    for (auto v : adj[u]) {
      if (parent[u] == v) continue;
      if (vis[v]) {
        isCycle = true;
        return;
      }
      parent[v] = u;
      
      dfs(v);
      if (isCycle) return;
    }
  };

  for (int i = 1; i <= N; i++) {
    if (vis[i]) continue;
    dfs(i);
    if (isCycle) {
      cout << "YES";
      return;
    };
  }
  cout << "NO";
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
