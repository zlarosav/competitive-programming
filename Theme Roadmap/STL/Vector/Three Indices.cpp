#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> p(n);
  for (int& e : p) cin >> e;
  for (int i = 1; i < n-1; i++) {
    if (p[i-1] < p[i] && p[i] > p[i+1]) {
      cout << "YES" << '\n';
      cout << i << ' ' << i+1 << ' ' << i+2 << '\n';
      return;
    }
  }
  cout << "NO" << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://codeforces.com/problemset/problem/1380/A