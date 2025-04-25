#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int a, b; cin >> a >> b;
  if ((a == 0 && b % 2 != 0) || (b == 0 && a % 2 != 0)) {
    cout << "NO\n"; return;
  }

  if ((a % 2 == 0)) cout << "YES\n";
  else cout << "NO\n";
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

// https://codeforces.com/contest/2008/problem/A