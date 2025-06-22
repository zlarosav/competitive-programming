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
  map<int, set<int>> users;
  while (q--) {
    int t, a, b; cin >> t >> a >> b;
    if (t == 1) {
      users[a].insert(b);
    } else if (t == 2) {
      users[a].erase(b);
    } else {
      if (users[a].count(b) && users[b].count(a)) {
        cout << "Yes\n";
        continue;
      }
      cout << "No\n";
    }
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