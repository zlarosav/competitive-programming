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
  vector<vector<int>> grid(N, vector<int>(M));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> grid[i][j];
    }
  }

  const int INF = N*M + 5;
      
  vector<vector<int>> dist(N, vector<int>(M, INF));
  queue<pair<int,int>> q;
  
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (grid[i][j] == 0) {
          dist[i][j] = 0;
          q.push({i, j});
      }
    }
  }
  
  int dx[4] = {-1, 1, 0, 0}, dy[4] = {0, 0, -1, 1};
  
  while (!q.empty()) {
    auto [x, y] = q.front();
    q.pop();
    
    for (int d = 0; d < 4; d++) {
      int nx = x + dx[d], ny = y + dy[d];
      if (nx >= 0 && nx < N && ny >= 0 && ny < M) {
        if (dist[nx][ny] > dist[x][y] + 1) {
          dist[nx][ny] = dist[x][y] + 1;
          q.push({nx, ny});
        }
      }
    }
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cout << dist[i][j] << ' ';
    }
    cout << '\n';
  }
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