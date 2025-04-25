#include <bits/stdc++.h>

using namespace std;

void solve() {
  vector<int> v;
  int q; cin >> q;
  while (q--) {
    int tipo; cin >> tipo;
    if (tipo == 0) {
      int element; cin >> element;
      v.push_back(element);
    }
    if (tipo == 1) {
      int index; cin >> index;
      cout << v[index] << "\n";
    }
    if (tipo == 2) {
      v.pop_back();
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

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_1_A