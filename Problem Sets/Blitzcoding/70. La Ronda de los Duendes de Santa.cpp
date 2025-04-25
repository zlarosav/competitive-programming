#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, k; cin >> n >> k;
  vector<int> p(n);
  for (int i=1; i<=n; i++) p[i-1] = i;
  int pos = 0;
  while (k--) {
    int a; cin >> a;
    if (pos + a < p.size()) pos += a;
    else pos = (pos + a) % p.size();
    cout << p[pos] << ' ';
    p.erase(p.begin()+pos);
  }
  cout << '\n';
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
// https://blitzcoding.com/problem-detail/70