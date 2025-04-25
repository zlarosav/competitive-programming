#include <bits/stdc++.h>

using namespace std;

void solve() {
  int k, n, w; cin >> k >> n >> w;
  int total = 0;
  for (int i = 1; i <= w; i++) {
    total += i*k;
  }
  cout << ((total > n) ? total - n : 0) << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  //cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://codeforces.com/contest/546/problem/A