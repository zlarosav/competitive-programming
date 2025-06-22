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
const ll MX = 1e9 + 1;

void solve() {
  int n; cin >> n;
  vector<vector<int>> adj(n+1);
  vector<int> parents;
  for (int u = 1; u <= n; u++) {
    int v; cin >> v;
    if (v == -1) parents.push_back(u);
    else {
      adj[u].push_back(v);
      adj[v].push_back(u);
    }
  }
  vector<bool> vis(n+1);
  queue<int> q;
  function<int(int)> bfs = [&](int start) {
    int levels = 0;
    vis[start] = true;
    q.push(start);
    while (!q.empty()) {
      int sz = q.size();
      levels++;
      while (sz--) {
        int u = q.front();
        q.pop();
        for (int& v : adj[u]) {
          if (vis[v]) continue;
          vis[v] = true;
          q.push(v);
        }
      }
    }
    return levels;
  };
  int ans = 0;
  for (int& start : parents) {
    if (vis[start]) continue;
    ans = max(bfs(start), ans);
  }
  cout << ans;
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