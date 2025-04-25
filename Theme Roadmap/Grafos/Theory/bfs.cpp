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
  vector<int> vis(N + 1);
  vector<int> ans;
  queue<int> q;

  auto bfs = [&](int start) {
    vis[start] = 1;
    q.push(start);

    while (!q.empty()) {
      int u = q.front();
      q.pop();
      ans.push_back(u);

      for (auto v : adj[u]) {
        if (vis[v]) continue;
        vis[v] = 1;
        q.push(v);
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
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}