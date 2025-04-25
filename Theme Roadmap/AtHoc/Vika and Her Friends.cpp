#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, m, k; cin >> n >> m >> k;
  int a, b; cin >> a >> b;
  
  bool respondido = false;
  while (k--) {
    int c, d; cin >> c >> d;
    if (!respondido && (c + d) % 2 == (a + b) % 2) {
      cout << "NO\n";
      respondido = true;
    }
  }
  if (!respondido) cout << "YES\n";
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