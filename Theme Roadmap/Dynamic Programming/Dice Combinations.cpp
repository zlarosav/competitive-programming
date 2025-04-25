#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

const int MOD = 1e9 + 7;

void solve() {
  long long n; cin >> n;
  vector<long long> dp(n+1, 0);
  dp[0] = 1;
  dp[1] = 1;
  for (int pos = 2; pos <= n; pos++) {
    for (int dice = 1; dice <= 6; dice++) {
      if (pos - dice >= 0) {
        dp[pos] = (dp[pos] + dp[pos - dice]) % MOD;
      }
    }
  }
  //dbg(dp);
  cout << dp[n];
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

// https://cses.fi/problemset/task/1633/