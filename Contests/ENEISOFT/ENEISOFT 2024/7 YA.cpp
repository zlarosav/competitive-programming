#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  // n = 2020 x a + 2021 x b
  // n = 2020 x a + 2020 x b + b
  // n = 2020 (a+b) + b
  cout << (n % 2020 <= n/2020 ? "YES\n" : "NO\n");
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

// https://codeforces.com/group/wIyStOLCoV/contest/563589/problem/07