#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int q; cin >> q;
  vector<string> teclas(q);
  for (string& t : teclas) cin >> t;
  reverse(teclas.begin(), teclas.end());
  for (string& t : teclas) {
    for (int i=0; i<5; i++) {
      if (t[i] == '#') {
        cout << i+1 << ' ';
        break;
      }
    }
  }
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

// https://codeforces.com/contest/2009/problem/B