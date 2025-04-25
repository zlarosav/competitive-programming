#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, m; cin >> n >> m;
  cout << n/3 + 1 << ' ' << m/3 + 1 << '\n';
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

// https://codeforces.com/contest/1739/problem/A