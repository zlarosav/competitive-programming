#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  long long I, N, I0, mn, mx; cin >> I >> N >> I0 >> mn >> mx;
  if (I0 == mn) { cout << "NO"; return; }
  if (N > 0 && mn == mx - 1) { cout << "NO"; return; }
  cout << (I0 + I - N <= mn ? "NO" : "SI");
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