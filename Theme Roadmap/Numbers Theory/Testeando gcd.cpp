#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

int gcd(int n1, int n2) {
  if (n1 > n2) swap(n1, n2);
  if (n1 == 0) return n2;
  return gcd(n1, n2-n1);
}

void solve() {
  int a, b; cin >> a >> b;
  cout << gcd(a, b);
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