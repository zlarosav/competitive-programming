#include <bits/stdc++.h>

using namespace std;

void solve() {
  deque<int> v;
  int q; cin >> q;
  while (q--) {
    int tipo; cin >> tipo;
    if (tipo == 0) {
      int d, x; cin >> d >> x;
      if (d == 0) v.push_front(x);
      else v.push_back(x);
    }
    
    if (tipo == 1) {
      int p; cin >> p;
      cout << v[p] << "\n";
    }

    if (tipo == 2) {
      int d; cin >> d;
      if (d == 0)  v.pop_front();
      else v.pop_back();
    }
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

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_1_B