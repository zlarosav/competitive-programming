#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  string cadena; cin >> cadena;

  int lado = sqrt(n);
  //dbg(lado);
  if (lado * lado != n) {
    cout << "No\n"; return;
  }

  for (int i=1; i<lado-1; i++) {
    for (int j=1; j<lado-1; j++) {
      if (cadena[(i*lado) + j] != '0') {
        cout << "No\n"; return;
      }
    }
  }
  cout << "Yes\n"; return;
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

// https://codeforces.com/contest/2008/problem/B