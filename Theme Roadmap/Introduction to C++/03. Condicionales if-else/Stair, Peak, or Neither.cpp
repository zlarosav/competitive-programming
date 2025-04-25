#include <bits/stdc++.h>

using namespace std;

void solve() {
  int a, b, c; cin >> a >> b >> c;
  if (a < b && b < c) cout << "STAIR" << endl;
  else if (a < b && b > c) cout << "PEAK" << endl;
  else cout << "NONE" << endl;
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

// https://codeforces.com/problemset/problem/1950/A