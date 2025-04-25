#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, m; cin >> n >> m;
  string a, b; cin >> a >> b;
  
  for (int i=1; i<m; i++) {
    if (a[n-m +i] != b[i]) {
      cout << "NO\n";
      return;
    }
  }

  for (int i=0; i<n-m +1; i++) {
    if (a[i] == b[0]) {
      cout << "YES\n";
      return;
    }
  }

  cout << "NO\n";
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

// https://codeforces.com/contest/1704/problem/A