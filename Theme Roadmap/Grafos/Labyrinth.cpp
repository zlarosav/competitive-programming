#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int N, M; cin >> N >> M;
  vector<vector<char>> grid(N, vector<char>(M));
  pair<int, int> _inicio, _final;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      char curr; cin >> curr;
      grid[i][j] = curr;
      if (curr == 'A') _inicio = {i, j};
      if (curr == 'B') _final = {i, j};
    }
  }
  
  vector<vector<char>> parents(N, vector<char>(M));
  string ans = "";
  map<char, pair<int, int>> run = {{'U', {1,0}}, {'D', {-1,0}}, {'L', {0,1}}, {'R', {0,-1}}};
  function<void()> prntMovs = [&]() {
    auto [x, y] = _final;
    while (x != _inicio.first && y != _inicio.second) {
      char mov = parents[x][y];
      ans += mov;
      auto [nx, ny] = run[mov];
      x += nx; y += ny;
    }
  };

  vector<vector<bool>> vis(N, vector<bool>(M));
  queue<pair<int, int>> q;
  map<pair<int, int>, char> movs = {{{-1,0}, 'U'}, {{1,0}, 'D'},{{0,-1}, 'L'},{{0,1}, 'R'}};
  vector<int> dx = {-1, 1, 0, 0}, dy = {0, 0, -1, 1};
  int levels = 0;
  function<bool(int, int)> bfs = [&](int x, int y) {
    vis[x][y] = 1;
    parents[x][y] = 'A';
    q.push({x, y});

    while (!q.empty()) {
      int sz = q.size();
      levels++;
      while (sz--) {
        auto [ux, uy] = q.front();
        vis[ux][uy] = 1;
        q.pop();

        for (int d = 0; d < 4; d++) {
          int vx = ux + dx[d], vy = uy + dy[d];
          if (0 <= vx && 0 <= vy && !vis[vx][vy] && grid[vx][vy] != '#') {
            parents[vx][vy] = movs[{vx-ux,vy-uy}];
            if (vx == _final.first && vy == _final.second) {
              cout << "YES\n" << levels << '\n';
              prntMovs();
              reverse(ans.begin(), ans.end());
              return true;
            };
            q.push({vx, vy});
          }
        }
      }
    } 

    return false;
  };
  if (!bfs(_inicio.first, _inicio.second)) {
    cout << "IMPOSSIBLE\n";
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