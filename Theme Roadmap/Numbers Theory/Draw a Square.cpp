#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int x; cin >> x; string ans = "Yes\n";
  for (int i = 0; i < 3; i++) {
    int curr; cin >> curr;
    if (curr != x) ans = "No\n";
  }
  cout << ans;
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