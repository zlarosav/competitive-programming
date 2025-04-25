#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  long long n, m; cin >> n >> m;
  map<long long, long long> losers;
  for (long long i=1; i<=n; i++) losers[i] = 0;
  int L = 0, R = 0, prew = 0;
  for (long long i=0; i<m; i++) {
    long long l, r, w; cin >> l >> r >> w;
    while (i == 0 && l <= r) {
      if (losers[l]==0 && l != w) {
        losers[l] = w;
      }
      l++;
    }
    while (i!=0 && l < L) {
      if (losers[l]==0 && l != w) {
        losers[l] = w;
      }
      l++;
    }
    if (i != 0) l = prew;
    if (i!=0 && losers[l]==0 && l!=w) {
      losers[l] = w;
    }

    if (i != 0) l = R;
    while (i!=0 && l <= r) {
      if (losers[l]==0 && l != w) {
        losers[l] = w;
      }
      l++;
    }
    L = w-1; R = w+1; prew = w;
  }
  for (auto& m : losers) cout << m.second << ' ';
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