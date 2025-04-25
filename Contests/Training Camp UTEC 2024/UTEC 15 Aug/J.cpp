#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int x, y, z; cin >> x >> y >> z;
  int a, b, c; cin >> a >> b >> c;
  if (x <= a) {
    a -= x;
    if (a > 0) b += a;
    if (y <= b) {
      b -= y;
      if (b > 0) c += b;
      if (z <= c) {
        cout << "YES"; return;
      }
    }
  }
  cout << "NO";
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