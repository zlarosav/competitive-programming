#include <bits/stdc++.h>

using namespace std;

void solve() {
  int q; cin >> q;
  set<int> st;
  while (q--) {
    int type; cin >> type;
    switch (type) {
      case 0: {
        int x; cin >> x;
        st.insert(x);
        cout << st.size() << "\n";
      } break;
      case 1: {
        int x; cin >> x;
        cout << st.count(x) << "\n";
      } break;
      case 2: {
        int x; cin >> x;
        st.erase(x);
      } break;
      case 3: {
        int L, R; cin >> L >> R;
        auto start = st.lower_bound(L);
        auto end = st.upper_bound(R);
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

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_7_C