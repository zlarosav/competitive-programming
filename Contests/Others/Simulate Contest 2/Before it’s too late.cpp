#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  sort(v.begin(), v.end());  
  cout << v[n-1] - v[0];
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