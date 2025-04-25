#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, l, r; cin >> n >> l >> r;
  vector<int> v(n);
  for (int i=1; i<=n; i++) {
    v[i-1] = i;
  }
  reverse(v.begin() + l-1, v.begin() + r);
  for (auto& i : v) cout << i << " ";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; //cin >> t;
  while(t--) {
    solve();
  }

  return 0;
}

// https://atcoder.jp/contests/abc356/tasks/abc356_aw