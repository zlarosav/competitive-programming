#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int V, E; cin >> V >> E;
  vector<vector<int>> adj(V);
  while (E--) {
    int u, v; cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  vector<int> visited(V);

  vector<int> ans;
  function<void(int)> dfs = [&](int node) {
    visited[node] = 1;
    ans.push_back(node);
    for (auto x : adj[node]) {
      if (visited[x] == 1) continue;
      dfs(x);
    }
  };

  for (int i = 0; i < V; i++) {
    if (visited[i] == 1) continue;
    dfs(i);
  }
  
  for (int x : ans) cout << x << ' ';
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
