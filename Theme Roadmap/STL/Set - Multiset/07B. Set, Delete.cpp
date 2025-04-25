#include <bits/stdc++.h>

using namespace std;

void solve() {
  int q; cin >> q;
  set<int> st;
  while (q--) {
    int type, x; cin >> type >> x;
    switch (type) {
      case 0: {
        st.insert(x);
        cout << st.size() << "\n";
      } break;
      case 1: {
        cout << st.count(x) << "\n";
      } break;
      case 2: {
        st.erase(x);
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

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_7_B