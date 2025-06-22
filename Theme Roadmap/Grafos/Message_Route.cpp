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
  vector<int> parents(n+1);
  vector<bool> vis(n+1);
  queue<int> q;
  vis[1] = true;
  q.push(1);
  while (!q.empty()) {
    int u = q.front();
    q.pop();
    for (int& v : adj[u]) {
      if (vis[v]) continue;
      parents[v] = u;
      vis[v] = true;
      q.push(v);
      if (v == n) {
        vector<int> ans;
        while (n != 1) {
          ans.push_back(n);
          n = parents[n];
        }
        ans.push_back(1);
        cout << ans.size() << '\n';
        for (int i = ans.size()-1; i >= 0; i--) {
          cout << ans[i] << ' ';
        }
        return 0;
      }
    }
  }
  cout << "IMPOSSIBLE";

  return 0;
}