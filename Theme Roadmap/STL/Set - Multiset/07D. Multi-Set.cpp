#include <bits/stdc++.h>

using namespace std;

void solve() {
  int q; cin >> q;
  multiset<int> m;
  while (q--) {
    int type; cin >> type;
    switch (type) {
      case 0: {
        int x; cin >> x;
        m.insert(x);
        cout << m.size() << "\n";
      } break;
      case 1: {
        int x; cin >> x;
        cout << m.count(x) << "\n";
      } break;
      case 2: {
        int x; cin >> x;
        m.erase(x);
      } break;
      case 3: {
        int L, R; cin >> L >> R;
        auto start = m.lower_bound(L);
        auto end = m.upper_bound(R);
        for (auto it = start; it != end; it++) {
          cout << *it << "\n";
        }
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

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_7_D