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
  int total = 0;
  vector<vector<int>> grid1(N, vector<int>(M)), grid2(M, vector<int>(N));
  vector<vector<int>> grid3(N, vector<int>(M)), grid4(M, vector<int>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> grid1[i][j];

      total += grid1[i][j];
    }
    reverse(grid3[i].begin(), grid3[i].end());
  }

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      grid2[i][j] = grid1[j][i];
    }
    reverse(grid2[i].begin(), grid2[i].end());
  }

  dbg(grid1);
  /*
    {4, 3, 1, 1, 1}, 
    {5, 4, 3, 5, 1}, 
    {9, 6, 2, 1, 1}, 
    {8, 7, 1, 1, 2}
  */
  dbg(grid2);
  /*
    {8, 9, 5, 4}, 
    {7, 6, 4, 3}, 
    {1, 2, 3, 1}, 
    {1, 1, 5, 1}, 
    {2, 1, 1, 1}
  */
  //dbg(grid3);
  /*
    {2, 1, 1, 7, 8}, 
    {1, 1, 2, 6, 9}, 
    {1, 5, 3, 4, 5}, 
    {1, 1, 1, 3, 4}
  */
  //dbg(grid4);
  /*
    {8, 9, 5, 4}, 
    {7, 6, 4, 3}, 
    {1, 2, 3, 1}, 
    {1, 1, 5, 1}, 
    {2, 1, 1, 1}
  */
  
  int X, Y; cin >> X >> Y;
  vector<vector<char>> plane(X, vector<char>(Y));
  for (int i = 0; i < X; i++) {
    for (int j = 0; j < Y; j++) {
      cin >> plane[i][j];
    }
  }

  int ans = INT_MAX;
  for (int i = 0; i < N - X; i++) {
    for (int j = 0; j < M - Y; j++) {
      int curr = 0;
      for (int ui = 0; ui < X; ui++) {
        for (int uj = 0; uj < Y; uj++) {
          if (plane[i][j] == '#') {
            curr += grid1[ui][uj];
          }
        }
      }
      ans = min(ans, curr);
    }
  }

  for (int i = 0; i < N - X; i++) {
    for (int j = 0; j < M - Y; j++) {
      int curr = 0;
      for (int ui = 0; ui < X; ui++) {
        for (int uj = 0; uj < Y; uj++) {
          if (plane[i][j] == '#') {
            curr += grid3[ui][uj];
          }
        }
      }
      ans = min(ans, curr);
    }
  }

  for (int i = 0; i < M - Y; i++) {
    for (int j = 0; j < N - X; j++) {
      int curr = 0;
      for (int ui = 0; ui < Y; ui++) {
        for (int uj = 0; uj < X; uj++) {
          if (plane[i][j] == '#') {
            curr += grid2[ui][uj];
          }
        }
      }
      ans = min(ans, curr);
    }
  }

  for (int i = 0; i < M - Y; i++) {
    for (int j = 0; j < N - X; j++) {
      int curr = 0;
      for (int ui = 0; ui < Y; ui++) {
        for (int uj = 0; uj < X; uj++) {
          if (plane[i][j] == '#') {
            curr += grid4[ui][uj];
          }
        }
      }
      ans = min(ans, curr);
    }
  }

  dbg(ans);
  cout << total - ans;
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