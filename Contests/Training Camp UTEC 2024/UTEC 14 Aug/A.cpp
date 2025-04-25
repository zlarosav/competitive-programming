#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> v(n);
  for (int& i:v) cin >> i;
  int q; cin >> q;
  while (q--) {
    int i, j, suma = 0; cin >> i >> j;
    for (; i <= j; i++) suma += v[i];
    cout << suma << '\n';
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