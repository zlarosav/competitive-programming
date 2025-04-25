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
  // Debe llegar de 1 hasta N
  vector<int> parents(N + 1);

  vector<int> vis(N + 1);
  queue<int> q;

  auto bfs = [&](int start) {
    vis[start] = 1;
    q.push(start);

    while (!q.empty()) {
      int sz = q.size();

      while (sz--) {
        int u = q.front();
        q.pop();
        
        for (auto v : adj[u]) {
          if (vis[v]) continue;
          vis[v] = 1;
          parents[v] = u;
          if (v == N) {
            vector<int> ans = {v};
            while (v != 1) {
              v = parents[v];
              ans.push_back(v);
            }
            reverse(ans.begin(), ans.end());
            cout << ans.size() << '\n';
            for (auto x : ans) cout << x << ' '; 
            return true;
          }
          q.push(v);
        }
      }
    }
    return false;
  };

  if (!bfs(1)) cout << "IMPOSSIBLE";
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