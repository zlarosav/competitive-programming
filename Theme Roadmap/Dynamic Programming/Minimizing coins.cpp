#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, m; cin >> n >> m;
  int monedas[n];
  int dp[m+1];
  memset(dp, 0, sizeof(dp));
  
  for (int i = 0; i < n; i++) {
    int coin; cin >> coin;
    monedas[i] = coin;
    if (coin <= m) dp[coin] = 1;
  }

  sort(monedas, monedas+n);

  for (int i = monedas[0]+1; i < m+1; i++) {
    if (dp[i] != 1) {
      int mn = INT_MAX;
      for (int j = 0; j < n; j++) {
        int y = monedas[j];
        int need = i - y;
        if (need > 0 && dp[need] != 0) {
          mn = min(dp[y] + dp[need], mn);
        }
      }
      dp[i] = (mn == INT_MAX ? 0 : mn);
    }
  }
  cout << (dp[m] == 0 ? -1 : dp[m]);
  //dbg(dp);
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

// https://cses.fi/problemset/task/1634