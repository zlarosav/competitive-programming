#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  int n; cin >> n;
  vector<bool> v(n+1);
  for (int i = 1; i <= n; i++) {
    int x; cin >> x;
    if (v[i]) continue;
    v[x] = 1;
  }

  vector<int> ans;
  for (int i = 1; i <= n; i++) {
    if (!v[i]) {
      ans.push_back(i);
    }
  }
  cout << ans.size() << '\n';
  for (int x : ans) cout << x << ' ';
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