#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, q; cin >> n >> q;
  map<int, set<int>> mp;
  while (q--) {
    int tipo, a, b; cin >> tipo >> a >> b;
    if (tipo == 1) {
      mp[b].insert(a);
    } else if (tipo == 2) {
      mp[b].erase(a);
    } else {
      if (mp[b].count(a) > 0 && mp[a].count(b) > 0) cout << "Yes\n";
      else cout << "No\n";
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

// https://atcoder.jp/contests/abc278/tasks/abc278_c