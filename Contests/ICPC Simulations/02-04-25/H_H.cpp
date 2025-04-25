#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, m; cin >> n >> m;
  int a = INT_MIN, b = INT_MIN;
  while (m--) {
    int l, r; cin >> l >> r;
    a = max(l, a);
    b = max(r, b);
  }
  if (a + b > n) {
    cout << "IMPOSSIBLE\n";
    return;
  }
  for (int i = a + b; i < n; i++) cout << 'R';
  while (a--) cout << 'R';
  while (b--) cout << 'W';
  cout << '\n';
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