#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m; cin >> n >> m;
  vector<vector<int>> adj(n+1);
  while (m--) {
    int u, v; cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  
  vector<bool> vis(n+1);
  function<void(int)> dfs = [&](int u) {
    vis[u] = true;
    for (int& v : adj[u]) {
      if (vis[v]) continue;
      dfs(v);
    }
  }; 

  vector<pair<int, int>> nuevasAristas;
  for (int u = 1; u <= n; u++) {
    if (vis[u]) continue;
    dfs(u);
    if (u > 1) nuevasAristas.push_back({u-1, u});
  }

  cout << nuevasAristas.size() << '\n';
  for (auto [x, y] : nuevasAristas) {
    cout << x << ' ' << y << '\n';
  }

  return 0;
}