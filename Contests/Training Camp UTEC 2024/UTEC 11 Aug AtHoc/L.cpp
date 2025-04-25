#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, a, b; cin >> n >> a >> b;
  vector<int> v(n);
  for (int& i : v) cin >> i;
  sort(v.begin(), v.end());
  cout << abs(v[b-1] - v[n-a]);
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