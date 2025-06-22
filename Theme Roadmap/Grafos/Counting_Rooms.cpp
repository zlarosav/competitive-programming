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
  int n, m; cin >> n >> m;
  vector<vector<char>> grid(n, vector<char>(m));
  for (auto& x : grid) for (char& i : x) cin >> i;
  
  int dx[] = {-1,1,0,0}, dy[] = {0,0,-1,1};
  vector<vector<bool>> vis(n, vector<bool>(m));
  function<void(int, int)> dfs = [&](int ux, int uy) {
    vis[ux][uy] = true;
    for (int d = 0; d < 4; d++) {
      int vx = ux + dx[d], vy = uy + dy[d];
      if (0 <= vx && 0 <= vy && vx < n && vy < m && !vis[vx][vy] && grid[vx][vy] == '.') {
        dfs(vx, vy);
      }
    }
  };

  int comp = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (vis[i][j] || grid[i][j] != '.') continue;
      dfs(i, j);
      comp++;
    }
  }
  cout << comp;
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