#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int k[3], kw = 0, pw = 0;
  for (int& i : k) cin >> i;
  for (int i = 0; i < 3; i++) {
    int p; cin >> p;
    if (k[i] > p) kw++;
    else pw++;
  }
  cout << (kw > pw ? "Krejcikova" : "Paolini");
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