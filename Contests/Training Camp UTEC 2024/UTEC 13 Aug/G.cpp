#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, l, r; cin >> n >> l >> r;
  vector<int> v(n);
  for (int &i : v) cin >> i;
  sort(v.begin(), v.end());
  int L = 0, R = n-1;
  while (L < R) {
    int mid = (L+R)/2;
    if (l <= v[mid] && v[mid] <= r) L = mid;
    else R = mid - 1;
  }
  cout << L << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}