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
  vector<int> v(n);
  for (int& i : v) cin >> i;
  vector<int> mx(n), mn(n);
  mx[0] = v[0];
  for (int i = 1; i < n; i++) {
    mx[i] = max(mx[i-1], v[i]);
  }

  mn[n-1] = v[n-1];
  for (int i = n-2; i > 0; i--) {
    mn[i] = min(v[i], mn[i+1]);
  }

  vector<int> ans;
  for (int i = 0; i < n; i++) {
    if (i == 0 && v[i] <= mn[i+1]) ans.push_back(v[i]);
    else if (i == n-1 && mx[i-1] <= v[i]) ans.push_back(v[i]);
    else if (mx[i-1] <= v[i] && v[i] <= mn[i+1]) ans.push_back(v[i]);
  }

  cout << ans.size() << ' ';
  for (int i = 0; i < min(100, (int)ans.size()); i++) {
    cout << ans[i] << ' ';
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