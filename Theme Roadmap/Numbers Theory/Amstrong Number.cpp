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
  int cntDigits = log10(n) + 1;
  int acum = 0, origin = n;
  while (n > 0) {
    acum += pow((n % 10), cntDigits);
    n /= 10;
  }
  cout << (origin == acum ? "true" : "false");
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