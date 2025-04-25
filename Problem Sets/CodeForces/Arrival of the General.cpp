#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> v(n); 
  int mx = INT_MIN, pos_mx = INT_MIN;
  int mn = INT_MAX, pos_mn = INT_MAX;
  for (int i = 0; i < n; i++) {
    int x; cin >> x;
    if (mx < x) {
      mx = x;
      pos_mx = i;
    }

    if (mn >= x) {
      mn = x;
      pos_mn = i;
    }
  }

  if (pos_mn > pos_mx) {
    cout << (n-1-pos_mn) + (pos_mx);
  } else {
    cout << (n-1-pos_mn) + (pos_mx) - 1;
  }
  //cerr << pos_mn << ' ' << pos_mx;
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

// https://codeforces.com/contest/144/problem/A