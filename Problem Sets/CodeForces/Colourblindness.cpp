#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  string a, b; cin >> a >> b;
  for (int i = 0; i < n; i++) {
    if ((a[i] == 'R' || b[i] == 'R') && a[i] != b[i]) {
      cout << "NO\n";
      return;
    } 
  } 
  cout << "YES\n";
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

// https://codeforces.com/contest/1722/problem/B