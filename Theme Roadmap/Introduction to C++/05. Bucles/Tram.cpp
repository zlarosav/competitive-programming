#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  int maxCapacity = 0, actual = 0;
  for (int i=0; i<n; i++) {
    int a, b; cin >> a >> b;
    actual += b-a;
    maxCapacity = max(maxCapacity, actual);
  }
  cout << maxCapacity;
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

// https://codeforces.com/contest/116/problem/A