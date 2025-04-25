
#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  int n, m; cin >> n >> m;
  vector<vector<int>> grid(n, vector<int>(m));
  for (auto& x : grid) for (int& i : x) cin >> i;

  vector<vector<bool>> vis(n, vector<bool>(m));
  vector<int> dx = {-1, 1, 0, 0}, dy = {0, 0, -1, 1};
  function<int(int, int)> dfs = [&](int x, int y) {
    vis[x][y] = 1;
    int curr = grid[x][y];
    for (int d = 0; d < 4; d++) {
      int nx = x + dx[d], ny = y + dy[d];
      if (0 <= nx && 0 <= ny && nx < n && ny < m && !vis[nx][ny] && grid[nx][ny] != 0) {
        curr += dfs(nx, ny);
      }
    }
    
    return curr;
  };

  int ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (vis[i][j] || grid[i][j] == 0) continue;
      ans = max(dfs(i, j), ans);
    }
  }

  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}