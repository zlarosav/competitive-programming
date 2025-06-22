#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  int n, q; cin >> n >> q;
  map<int, vector<int>> mp;
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    mp[x].push_back(i);
  }
  while (q--) {
    int x, k; cin >> x >> k; k--;
    cout << (k >= mp[x].size() ? -1 : mp[x][k]) << '\n';  
  }
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