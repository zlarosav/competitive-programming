#include <bits/stdc++.h>

using namespace std;

void solve() {
  set<int> A, B;
  int n; cin >> n;
  for (int i = 0; i < n ; i++) {
    int e; cin >> e; 
    A.insert(e);
  }
  int m; cin >> m;
  for (int i = 0; i < m ; i++) {
    int e; cin >> e; 
    B.insert(e);
  }

  for (auto& e : A) if (B.count(e)) cout << e << "\n";

  /* vector<int> v;
  set_intersection(A.begin(), A.end(), B.begin(), B.end(), back_inserter(v));
  for (auto& e : v) cout << e << "\n"; */
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

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_9_B