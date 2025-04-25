#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  int h = 1;
  int diasSinRegar = 0;
  int diasRegados = 0;
  bool die = false;
  while (n--) {
    int q; cin >> q;
    //cerr << q << ' ';
    if (q == 0 && diasSinRegar == 1) {
      die = true;
    } else if (q == 0 && diasSinRegar == 0) {
      diasSinRegar++;
      diasRegados = 0;
    } else if (q == 1 && diasRegados >= 1) {
      h += 5;
      diasSinRegar = 0;
    } else if (q == 1 && diasRegados == 0) {
      h++;
      diasRegados++;
      diasSinRegar = 0;
    }
  }

  cout << (die ? -1 : h) << '\n';
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

// https://codeforces.com/contest/1585/problem/A