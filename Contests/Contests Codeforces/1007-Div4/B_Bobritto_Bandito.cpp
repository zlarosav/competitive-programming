#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  int n, m, l, r; cin >> n >> m >> l >> r;

  int low = max(0, m - r);
  int high = min(m, -l);
  
  int x = (low + high) / 2;
  
  int L = -x;
  int R = m - x;
  
  cout << L << ' ' << R << '\n';
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