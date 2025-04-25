#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t, q; cin >> t >> q;
  vector<vector<int>> v;
  
  while (t--) {
    int n; cin >> n;
    vector<int> subv(n);
    for (auto& e : subv) cin >> e;
    v.push_back(subv);
  }

  while (q--) {
    int tipo, idx; cin >> tipo >> idx;
    cout << v[tipo][idx] << '\n';
  }

  return 0;
}

// https://www.hackerrank.com/challenges/variable-sized-arrays/problem?isFullScreen=true