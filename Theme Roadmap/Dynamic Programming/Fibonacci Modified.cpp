#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

/*long long t(int i) {
  if (i == 1) return t1;
  if (i == 2) return t2;
  if (dp[i] != -1) return dp[i];
  return dp[i] = t(i-2) + pow(t(i-1), 2);
}*/

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t1, t2, n; cin >> t1 >> t2 >> n;
  long long dp[100];
  memset(dp, -1, sizeof(dp));
  //cout << t(n);

  dp[1] = t1;
  dp[2] = t2;
  int pos = 3;
  while (pos <= n) {
    dp[pos] = dp[pos-2] + pow(dp[pos-1], 2);
    pos++;
  }

  cout << dp[n];

  return 0;
}

/*
https://www.hackerrank.com/challenges/fibonacci-modified/problem?isFullScreen=true
Este problema es más complejo que como se resuelve aquí porque utiliza números de longitudes exageradamente grandes
*/