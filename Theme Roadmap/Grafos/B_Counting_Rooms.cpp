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
  vector<vector<char>> grid(N, vector<char>(M));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> grid[i][j];
    }
  }

  vector<vector<bool>> vis(N, vector<bool>(M));
  vector<int> dx = {-1, 1, 0, 0}, dy = {0, 0, -1, 1};
  function<void(int, int)> dfs = [&](int x, int y) {
    vis[x][y] = 1;

    for (int d = 0; d < 4; d++) {
      int nx = x + dx[d], ny = y + dy[d];
      if (0 <= nx && nx < N && 0 <= ny && ny < M && grid[nx][ny] == '.' && !vis[nx][ny]) dfs(nx, ny);
    }
  };

  int comp = 0;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (vis[i][j] || grid[i][j] == '#') continue;
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