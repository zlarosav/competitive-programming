#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

#define max3(a, b, c) max(a, max(b, c))
#define min3(a, b, c) min(a, min(b, c))

void solve() {
  int a, b, c; cin >> a >> b >> c;
  if (max3(a, b, c) != a && min3(a, b, c) != a) cout << a;
  else if (max3(a, b, c) != b && min3(a, b, c) != b) cout << b;
  else cout << c;
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
