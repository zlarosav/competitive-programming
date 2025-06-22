#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;
const ll MX = 1e9 + 1;

void solve() {
  int n; cin >> n;
  vector<int> v(n);
  for (int& i : v) cin >> i;
  vector<int> dp(n, -1);
  dp[0] = 0;
  for (int i = 1; i < n; i++) {
    int one = dp[i-1] + abs(v[i] - v[i-1]);
    int two = INT_MAX;
    if (i > 1) {
      two = dp[i-2] + abs(v[i] - v[i-2]);
    }
    dp[i] = min(one, two);
  }
  cout << dp[n-1];
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