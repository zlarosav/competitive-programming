#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string p, h; cin >> p >> h;
  sort(p.begin(), p.end());
  for (int i = 0; i < h.size(); i++) {
    string pp = h.substr(i, p.size());
    sort(pp.begin(), pp.end());
    if (p == pp) { 
      cout << "YES" << '\n';
      return;
    }
  }
  cout << "NO" << '\n';
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

// https://codeforces.com/problemset/problem/1278/A