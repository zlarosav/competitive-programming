#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  string platos[n];
  for (string& plato : platos) cin >> plato;
  for (int i = 1; i < n; i++) {
    if (i != n-1 && platos[i] == "sweet" && platos[i-1] == platos[i]) {
      cout << "No"; return;
    }
  }
  cout << "Yes";
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

// https://atcoder.jp/contests/abc364/tasks/abc364_a