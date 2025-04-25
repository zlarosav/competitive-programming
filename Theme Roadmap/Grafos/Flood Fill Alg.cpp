#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int N, M; cin >> N >> M;
  vector<vector<int>> image(N, vector<int>(M));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> image[i][j];
    }
  }
  int sr, sc, color; cin >> sr >> sc >> color;
  int c = image[sr][sc];

  vector<vector<int>> vis(N, vector<int>(M));
  vector<int> dx = {-1, 1, 0, 0}, dy = {0, 0, -1, 1};
  function<void(int, int)> dfs = [&](int x, int y) {
    vis[x][y] = 1;
    image[x][y] = color;

    for (int d = 0; d < 4; d++) {
      int nx = x + dx[d], ny = y + dy[d];
      if (0 <= nx && 0 <= ny && nx < N && ny < M && !vis[nx][ny] && image[nx][ny] == c) {
        dfs(nx, ny);
      }
    }
    
  };
  dfs(sr, sc);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cout << image[i][j] << ' ';
    }
    cout << '\n';
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
