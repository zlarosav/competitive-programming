#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  int n, m, k; cin >> n >> m >> k;
  int times = (n * m) / k;
  vector<pair<int, int>> white, black;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if ((i + j) % 2 == 0) white.push_back({ i, j });
      else black.push_back({ i, j });
    }
  }

  vector<vector<int>> grid(n, vector<int>(m));
  
  int w = 0, b = 0;
  for (int c = 1; c <= k; c++) {
    for (int cnt = 0; cnt < times; cnt++) {
      pair<int, int> cell;
      if (w < white.size()) {
        cell = white[w++];
      } else {
        cell = black[b++];
      }
      grid[cell.first][cell.second] = c;
    }
  }

  for (auto& row : grid) {
    for (int x : row) cout << x << ' ';
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