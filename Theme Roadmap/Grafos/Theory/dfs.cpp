#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

#define pb push_back
#define sz(a) ((int)(a).size())
#define ff first
#define ss second
#define all(a) (a).begin(), (a).end()
#define allr(a) (a).rbegin(), (a).rend()
#define approx(a) fixed << setprecision(a)

using ll = long long;
const double PI = 3.141592653589793;
const ll MX = 1e9 + 1;

void solve() {
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

  for (int u = 1; u <= n; u++) {
    if (vis[u]) continue;
    dfs(u);
  }
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