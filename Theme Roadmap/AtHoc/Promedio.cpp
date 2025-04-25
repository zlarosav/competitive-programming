/*
  https://omegaup.com/arena/problem/Promedio-GCF/#problems
  Tema: Basic
*/

#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  double suma = 0.0;
  for (int i = 0; i < n; i++) {
    double x; cin >> x;
    suma += x;
  }
  cout << suma / n;
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