#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, x; cin >> n >> x;
  vector<pair<int, int>> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i].first;
    v[i].second = i + 1;
  }
  sort(v.begin(), v.end());

  int l = 0, r = n - 1;
  while (l < r) {
    int curr = v[l].first + v[r].first;
    if (curr == x) {
      int f = min(v[l].second, v[r].second);
      int s = max(v[l].second, v[r].second);
      cout << f << ' ' << s;
      return;
    }
    if (curr > x) r--;
    else if (curr < x) l++;
  }
  cout << "IMPOSSIBLE";
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