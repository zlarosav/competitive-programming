#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, x; cin >> n >> x;
  vector<int> v(n);
  for (int& i : v) cin >> i;
  sort(v.begin(), v.end());

  int ans = 0, l = 0, r = n - 1;
  while (l <= r) {
    if (l == r) {
      cout << ans + 1;
      return;
    }
    if (v[l] + v[r] <= x) l++;  
    ans++; r--;
  }
  cout << ans;
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