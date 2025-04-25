#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> v(n);
  for (int& i : v) cin >> i;

  int l = 0, r = 0; // r -> apunta al v.end(), osea a fuera
  int mxLen = 0;
  while (l < n) {
    r = l;
    while (r < n && v[r] == 0) {
      r++;
    }
    mxLen = max(mxLen, r-l);
    l++;
  }
  cout << mxLen << '\n';
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

// https://codeforces.com/contest/1829/problem/B