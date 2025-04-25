#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, k; cin >> n >> k;
  int desire = 240 - k;
  for (int i = 1; i <= n; i++) {
    if (5 * i * (i + 1) > 2 * desire) {
      cout << i - 1;
      return;
    }
  }
  cout << n;
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
