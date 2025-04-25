#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, q; cin >> n >> q;
  queue<int> qe[n];
  while(q--) {
    int type, t; cin >> type >> t;
    switch (type) {
      case 0: {
        int x; cin >> x;
        qe[t].push(x);
      } break;
      case 1: {
        if (!qe[t].empty()) cout << qe[t].front() << "\n";
      } break;
      case 2: {
        if (!qe[t].empty()) qe[t].pop();
      } break;
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

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_2_B