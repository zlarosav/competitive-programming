#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  int N; cin >> N;
  vector<int> parent(N+1);
  vector<vector<int>> adj(N+1);
  for (int u = 1; u <= N; u++) {
    int v; cin >> v;
    parent[u] = v;
    if (v == -1) continue;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  //dbg(parent, adj);

  vector<int> vis(N+1);
  queue<int> q;
  
  auto bfs = [&](int start) {
    vis[start] = 1;
    q.push(start);
    int levels = 0;

    while (!q.empty()) {
      int sz = q.size();
      levels++;

      while (sz--) {
        int u = q.front();
        vis[u] = 1;
        q.pop();

        for (auto v : adj[u]) {
          if (vis[v] || v == parent[u]) continue;
          vis[v] = 1;
          q.push(v);
        }
      }
    }

    return levels;
  };

  int lvlMx = 0;
  for (int u = 1; u <= N; u++) {
    if (vis[u] || parent[u] != -1) continue;
    lvlMx = max(lvlMx, bfs(u));
  }

  cout << lvlMx;
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