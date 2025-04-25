#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> v(n), prLeft(n), prRight(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    if (i == 0) prLeft[0] = v[0];
    else prLeft[i] = v[i] + prLeft[i-1];
  }
  reverse(v.begin(), v.end());
  for (int i = 0; i < n; i++) {
    if (i == 0) prRight[0] = v[0];
    else prRight[i] = v[i] + prRight[i-1];

    if (prRight[i] == prLeft[n-1-i]) {
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