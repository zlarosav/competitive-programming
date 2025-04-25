#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string s; cin >> s;

  int sum1 = (s[0] - '0') + (s[1] - '0') + (s[2] - '0');
  int sum2 = (s[3] - '0') + (s[4] - '0') + (s[5] - '0');
    
  cout << (sum1 == sum2 ? "YES\n" : "NO\n");
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

// https://codeforces.com/group/wIyStOLCoV/contest/563589/problem/10