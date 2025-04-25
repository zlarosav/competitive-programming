#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  long long l, r, k; cin >> l >> r >> k;
  long long n = r-l+1;
  if (l == r) {
    if (l == 1) {
      cout << "NO\n"; return;
    }
    cout << "YES\n";
    return;
  }

  // número de pares
  long long pares = (r/2 - (l-1)/2);
  long long impares = n - pares;
  if (impares <= k) cout << "YES\n";
  else cout << "NO\n";
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

// https://codeforces.com/contest/1629/problem/B