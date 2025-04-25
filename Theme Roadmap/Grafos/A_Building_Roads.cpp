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

  vector<bool> vis(N + 1);
  vector<int> ans;

  function<void(int)> dfs = [&](int u) {
    vis[u] = 1;

    for (auto x : adj[u]) {
      if (vis[x]) continue;
      dfs(x);
    }
  };

  for (int i = 1; i <= N; i++) {
    if (vis[i]) continue;
    dfs(i);
    ans.push_back(i);
  }

  cout << (int)ans.size() - 1 << '\n';
  for (int i = 0; i < (int)ans.size() - 1; i++) {
    cout << ans[i] << ' ' << ans[i+1] << '\n';
  }
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