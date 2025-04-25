#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  int nT, mask_b = 0; cin >> nT;
  for (int i = 0; i < nT; i++) {
    int x; cin >> x;
    mask_b += (1 << x);
  }

  for (int mask = 0; mask < (1 << n); mask++) {
    if ((mask_b & mask) != mask_b) continue;
    cout << mask << ":";
    for (int i = 0; i < n; i++) {
      if (mask & (1 << i)) {
        cout << " " << i;
      }
    }
    cout << "\n";
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  //cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_11_A