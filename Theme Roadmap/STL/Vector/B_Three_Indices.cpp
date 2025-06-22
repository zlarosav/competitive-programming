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
  int p[n];
  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }
  for (int i = 1; i < n-1; i++) {
    if (p[i-1] < p[i] && p[i] > p[i+1]) {
      cout << "YES\n" << i << ' ' << i+1 << ' ' << i+2 << '\n';
      return;
    }
  }
  cout << "NO\n";
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