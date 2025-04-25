#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> need(n);
  need[0] = 0;
  for (int i=1; i<n; i++) {
    int e; cin >> e;
    need[i] = e;
  }
  int a, b; cin >> a >> b; b--;
  int ans = 0;
  for (int i=a; i<=b; i++) {
    ans += need[i];
  }
  cout << ans << '\n';
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

// https://codeforces.com/contest/38/problem/A