#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, q; cin >> n >> q;
  vector<int> v(n);
  for (int& i : v) cin >> i;
  while (q--) {
    int x; cin >> x;
    auto it = lower_bound(v.begin(), v.end(), x);
    cout << (*it != x ? -1 : it-v.begin()) << '\n';
  }
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