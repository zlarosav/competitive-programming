#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> a(n), b(n);
  for (int& i : a) cin >> i;
  for (int& i : b) cin >> i;
  cout << b[0] - a[0] << ' ';
  for (int i = 1; i < n; i++) {
    int start = max(a[i], b[i-1]);
    int final = b[i];
    cout << final - start << ' ';
  }
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

// https://codeforces.com/contest/1690/problem/C