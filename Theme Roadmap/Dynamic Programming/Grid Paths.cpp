#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  vector<string> grid(n);
  for (int i = 0; i < n; i++) {
    cin >> grid[i];
  }

  int dp[n][n];
  for (int i = 0; i < n; i++) {
    if (grid[i][0] == '.') {
      dp[i][0] = 1;
    } else {
      dp[i][0] = 0;
    }

    if (grid[0][i] == '.') {
      dp[0][i] = 1;
    } else {
      dp[0][i] = 0;
    }
  }

  for (int i = 1; i < n; i++) {
    for (int j = 1; j < n; j++) {
      if (grid[i][j] == '.') {
        dp[i][j] = dp[i-1][j] + dp[i][j-1];
      } else {
        dp[i][j] = 0;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << dp[i][j] << ' ';
    }
    cout << endl;
  }
  cout << dp[n-1][n-1];
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

// https://cses.fi/problemset/task/1638