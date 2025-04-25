#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  int p = 1;
  map<int, int> pr;
  while (n--) {
    int e; cin >> e;
    pr[e] = p;
    p++;
  }
  for (auto& m : pr) cout << m.second << ' ';
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

// https://codeforces.com/contest/136/problem/A