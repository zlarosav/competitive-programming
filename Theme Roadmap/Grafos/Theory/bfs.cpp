#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, m; cin >> n >> m;
  vector<vector<int>> adj(n+1);
  while (m--) {
    int u, v; cin >> u >> v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  vector<bool> vis(n+1);
  queue<int> q;
  vector<int> ans;
  auto bfs = [&](int start) {
    vis[start] = 1;
    q.push(start);

    while (!q.empty()) {
      int u = q.front();
      q.pop();
      ans.push_back(u);

      for (auto x : adj[u]) {
        if (vis[x]) continue;
        vis[x] = 1;
        q.push(x);
      }
    }
  };

  bfs(1);
  for (auto x : ans) cout << x << ' ';
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