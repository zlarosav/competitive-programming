#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  long long m; cin >> m; // monedas totales
  long long L = 0, R = 1e9+1;
  while (L < R) {
    long long k = (L+R)/2;
    if (k*(k+1)/2 <= m) L = k;
    else R = k - 1;
  }
  cout << L << '\n';
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