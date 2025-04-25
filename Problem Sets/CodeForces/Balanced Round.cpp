#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, k; cin >> n >> k;
  vector<int> v(n);
  for (int& i : v) cin >> i;
  int mx = 0, curr = 1;
  sort(v.begin(), v.end());
  for (int i = 0; i < n - 1; i++) {
    if (v[i+1] - v[i] <= k) curr++;
    else {
      mx = max(mx, curr);
      curr = 1;
    }
  }
  cout << n - max(mx, curr) << '\n';
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

// https://codeforces.com/contest/1850/problem/D