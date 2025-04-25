#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, q; cin >> n >> q;
  unordered_map<int, int> mp;
  vector<vector<int>> v(n);
  int pos = 0;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    if (mp.count(x) == 0) {
      mp[x] = pos; pos++;
    }
    v[mp[x]].push_back(i+1);
  }

  while(q--) {
    int x, k; cin >> x >> k;
    cout << ((mp.count(x) > 0 && k-1 < v[mp[x]].size()) ? v[mp[x]][k-1] : -1) << '\n';
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

// https://atcoder.jp/contests/abc235/tasks/abc235_c?lang=en