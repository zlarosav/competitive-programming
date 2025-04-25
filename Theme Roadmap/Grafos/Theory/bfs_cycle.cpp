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
  queue<int> q;
  auto bfs = [&](int start) {
    vis[start] = 1;
    q.push(start);

    while (!q.empty()) {
      int u = q.front();
      q.pop();

      for (auto v : adj[u]) {
        if (parent[u] == v) continue;
        if (vis[v]) return true;
        vis[v] = 1;
        parent[v] = u;
        q.push(v);
      }
    }

    return false;
  };
  for (int i = 1; i <= N; i++) {
    if (vis[i]) continue;
    if (bfs(i)) {
      cout << "YES";
      return;
    }
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