#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string w; cin >> w;
  if (w.size() <= 10) {
    cout << w << '\n';
  } else {
    cout << w[0] << w.size()-2 << w[w.size()-1] << '\n';
  }
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

// https://codeforces.com/contest/71/problem/A