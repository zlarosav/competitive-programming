#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n, q; cin >> n >> q;
  stack<int> st[n];
  while(q--) {
    int type, t; cin >> type >> t;
    if (type == 0) {
      int x; cin >> x;
      st[t].push(x);
    }
    if (type == 1) {
      if (!st[t].empty()) cout << st[t].top() << "\n";
    }
    if (type == 2) {
      if (!st[t].empty()) st[t].pop();
    }
  }

  return 0;
}

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_2_A