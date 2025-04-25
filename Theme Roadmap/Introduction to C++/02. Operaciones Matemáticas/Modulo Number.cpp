#include <bits/stdc++.h>

using namespace std;

const long long MOD = 998244353;

void solve() {
  long long num; 
  cin >> num;
  long long x = num % MOD;
  if (x < 0) x += MOD;
  cout << x << endl;
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

// https://atcoder.jp/contests/abc266/tasks/abc266_b?lang=en