#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, x; cin >> n >> x;
  if (n == x) {
    cout << n-1 << ' ';
    for (int i = 0; i < n-1; i++) {
      cout << i << ' ';
    }
    cout << '\n';
  } else {
    for (int i = 0; i < x; i++) {
      cout << i << ' ';
    }
    for (int i = x+1; i < n; i++) {
      cout << i << ' ';
    }
    cout << x << '\n';
  }
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
