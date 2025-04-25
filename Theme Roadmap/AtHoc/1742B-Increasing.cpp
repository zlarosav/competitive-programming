#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  set<int> st;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    st.insert(x);
  }
  if (st.size() == n) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
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

// https://codeforces.com/contest/1742/problem/B