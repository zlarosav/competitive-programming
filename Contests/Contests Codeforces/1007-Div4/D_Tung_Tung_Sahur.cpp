#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  string p, s; cin >> p >> s;
  if (p == s) {
    cout << "YES\n";
    return;
  }

  if (s.size() < p.size() || s.size() > 2 * p.size()) {
    cout << "NO\n";
    return;
  }

  int i = 0, j = 0;
  bool valid = true;
  while (i < p.size() && j < s.size() && valid) {
    if (s[j] != p[i]) {
      valid = false;
      break;
    }

    int take = 1;
    if (j + 1 < s.size() && s[j + 1] == p[i]) {
      int resCh = p.size() - i - 1;
      int resLen = s.size() - (j + 2);
      if (resLen >= resCh && resLen <= 2 * resCh) {
        take = 2;
      }
    }
    j += take;
    i++;
  }

  cout << (valid && j == s.size() ? "YES\n" : "NO\n");
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