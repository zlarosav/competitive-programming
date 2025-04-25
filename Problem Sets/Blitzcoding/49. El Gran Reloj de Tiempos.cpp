#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> v(n);
  for (int& x : v) cin >> x;
  int k; cin >> k;

  rotate(v.begin(), v.begin() + n - k, v.end());
  for (int& x : v) cout << x << ' ';
  cout << '\n';
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

// https://blitzcoding.com/problem-detail/49