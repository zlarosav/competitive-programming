#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

//#define max(a, b, c) max(max(a, b), c)
using namespace std;

void solve() {
  int n, a, b, c; cin >> n >> a >> b >> c;
  vector<int> dp(n+1, INT_MIN);

  dp[0] = 0;
  for (int i = 1; i <= n; i++) {
    if (i >= a) dp[i] = max(dp[i], dp[i - a] + 1);
    if (i >= b) dp[i] = max(dp[i], dp[i - b] + 1);
    if (i >= c) dp[i] = max(dp[i], dp[i - c] + 1);
  }
  //dbg(dp);
  cout << dp[n] << '\n';
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