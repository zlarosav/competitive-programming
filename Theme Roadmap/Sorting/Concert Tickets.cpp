#include <bits/stdc++.h>
 
#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif
 
using namespace std;
 
void solve() {
  int n, m; cin >> n >> m;
  multiset<int> prices;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    prices.insert(x);
  }
  //dbg(prices);
  for (int i = 0; i < m; i++) {
    int curr; cin >> curr;
    // fn prices.upper_bound is O(logN) but 
    // fn upper_bound(prices.begin(), prices.end()) is O(N)
    auto it = prices.upper_bound(curr);
    if (it == prices.begin()) {
      cout << -1 << '\n';
      continue;
    }
    it--;
    cout << *it << '\n';
    prices.erase(it);
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