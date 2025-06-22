#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  int n, x; cin >> n >> x;
  map<int, int> mp;
  for (int i = 1; i <= n; i++) {
    int curr; cin >> curr;
    if (mp.count(x - curr)) {
      cout << i << ' ' << mp[x-curr];
      return;
    }
    mp[curr] = i;
  }
  cout << "IMPOSSIBLE\n";
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