#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  int n; cin >> n;
  vector<int> p(2*n);
  set<int> existe;
  vector<vector<int>> v(n, vector<int>(n));
  for (auto& i : v) for (int& j : i) cin >> j;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (p[i+j+1] != 0) continue;
      p[i+j+1] = v[i][j];
      existe.insert(p[i+j+1]);
    }
  }
  set<int> faltantes;
  for (int i = 1; i <= 2*n; i++) faltantes.insert(i);
  for (int x : existe) faltantes.erase(x);

  auto it = faltantes.begin();
  for (int i = 0; i < 2*n; i++) {
    if (p[i] == 0) {
      cout << *it << ' ';
      it++;
    } else {
      cout << p[i] << ' ';
    }
  }
  cout << endl;
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