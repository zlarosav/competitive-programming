#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, m, a; cin >> n >> m >> a;
  long long ans = 1;
  (n % a == 0) ? ans *= n/a : ans *= ((n/a) + 1);
  (m % a == 0) ? ans *= m/a : ans *= ((m/a) + 1);
  cout << ans << '\n';
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

// https://blitzcoding.com/problem-detail/67