#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  int n; cin >> n;
  vector<int> q(n), r(n);
  for (int i = 0; i < n; i++) {
    cin >> q[i]; cin >> r[i];
  }
  
  int Q; cin >> Q;
  while (Q--) {
    int type, dinf; cin >> type >> dinf;
    ll left = 0, right = 10;
    while (left < right) {
      ll mid = left + (right - left) / 2;
      if (dinf <= q[type] * mid + r[type]) {
        right = mid;
      } else {
        left = mid + 1;
      }
    }
    dbg(left, right);
    cout << q[type] * left + r[type] << '\n';
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