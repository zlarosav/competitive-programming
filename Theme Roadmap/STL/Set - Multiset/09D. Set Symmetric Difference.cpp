#include <bits/stdc++.h>

using namespace std;

void solve() {
  set<int> ans;
  int n; cin >> n;
  for (int i = 0; i < n; i++) {
    int e; cin >> e;
    ans.insert(e);
  }
  int m; cin >> m;
  for (int i = 0; i < m; i++) {
    int e; cin >> e;
    auto term = ans.find(e);
    if (term != ans.end()) {
      ans.erase(e);
    } else {
      ans.insert(e);
    }
  }

  for (auto& e : ans) cout << e << "\n";

  /* FORMA II

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

  vector<int> V;
  for (auto& e : A) if (!B.count(e)) V.push_back(e);
  for (auto& e : B) if (!A.count(e)) V.push_back(e);
  sort(V.begin(), V.end());
  for (auto& e : V) cout << e << "\n"; 

  */

  /* FORMA III

  vector<int> v;
  set_symmetric_difference(A.begin(), A.end(), B.begin(), B.end(), back_inserter(v));
  for (auto& e : v) cout << e << "\n"; 

  */
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

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_9_D