#include <bits/stdc++.h>

using namespace std;

void solve() {
  vector<string> v(8);
  for (string& x : v) cin >> x;

  for (int i = 0; i < 8; i++) {
    bool full = true;
    for (int j = 0; j < 8; j++) {
      if (v[i][j] != 'R') {
        full = false;
        break;
      }
    }
    if (full) {
      cout << 'R' << '\n';
      return;
    }
  }

  for (int i = 0; i < 8; i++) {
    bool full = true;
    for (int j = 0; j < 8; j++) {
      if (v[j][i] != 'B') {
        full = false;
        break;
      }
    }
    if (full) {
      cout << 'B' << '\n';
      return;
    }
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

// https://codeforces.com/contest/1742/problem/C