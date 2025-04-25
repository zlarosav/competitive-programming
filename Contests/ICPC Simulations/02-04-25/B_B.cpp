#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  map<int, vector<int>> mp;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    mp[x].push_back(i);
  }
  vector<pair<int, vector<int>>> v(mp.rbegin(), mp.rend());
  vector<int> ans(n);
  int r = 1;
  for (auto& [_, idxs] : v) {
    for (int& idx : idxs) {
      ans[idx] = r;
    }
    r += idxs.size();
  }
  for (int& i : ans) cout << i << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}