#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> v(n);
  for (int& i : v) cin >> i;
  int mn = *min_element(v.begin(), v.end());
  int ans = 0;
  for (int i : v) {
    ans += i - mn;
  }
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

// https://codeforces.com/contest/1676/problem/B