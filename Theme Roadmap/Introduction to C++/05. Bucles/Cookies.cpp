#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  int count = 0;
  for (int i=0; i<n; i++) {
    int b; cin >> b;
    if (b % 2 != 0) count++;
  }
  cout << (count % 2 != 0 ? count : n-count);
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

// https://codeforces.com/contest/129/problem/A