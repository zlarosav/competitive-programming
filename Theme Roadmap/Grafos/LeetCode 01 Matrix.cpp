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
  vector<int> dx = {-1, 1, 0, 0}, dy = {0, 0, -1, 1};
  vector<vector<bool>> vis(N, vector<bool>(M));
  // coords - steps
  vector<vector<int>> ans(N, vector<int>(M));
  queue<pair<pair<int,int>, int>> q;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      if (grid[i][j] == 1) {
        q.push({{i, j}, 0});
        //vis[i][j] == 1;
      }
    }
  }

  while (!q.empty()) {
    auto [ux, uy] = q.front().first;
    int steps = q.front().second;
    //if (vis[ux][uy]) continue;
    vis[ux][uy] = 1;
    ans[ux][uy] = steps;
    q.pop();

    for (int d = 0; d < 4; d++) {
      int vx = ux + dx[d], vy = uy + dy[d];
      if (0 <= vx && 0 <= vy && vx < N && vy < M && !vis[vx][vy] && grid[vx][vy] != 0) {
        vis[vx][vy] = 1;
        q.push({{vx, vy}, steps+1});
      }
    }
  }

  dbg(ans);
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