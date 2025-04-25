#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  string s; cin >> s;
  int cnt0 = 0, cnt1 = 0;
  for (char ch : s) {
    if (ch == '0') cnt0++;
    else cnt1++;
  }
  cout << (cnt0 + cnt1 * (n-1)) << '\n';
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
