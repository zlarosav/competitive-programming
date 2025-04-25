#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string s; cin >> s;
  long long ans = 0, unos = 0;
  for (char ch : s) {
    if (ch == '1') unos++;
    else if (ch == '0' && unos > 0) ans += (unos + 1);
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