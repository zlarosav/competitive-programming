#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

#define pb push_back
#define sz(a) ((int)(a).size())
#define ff first
#define ss second
#define all(a) (a).begin(), (a).end()
#define allr(a) (a).rbegin(), (a).rend()
#define approx(a) fixed << setprecision(a)

using ll = long long;
const double PI = 3.141592653589793;
const ll MX = 1e9 + 1;

void solve() {
  int d, sumTime; cin >> d >> sumTime;
  vector<pair<int, pair<int, int>>> v(d);
  vector<int> ans(d);
  int acumMn = 0, acumMx = 0;
  for (int i = 0; i < d; i++) {
    v[i].ff = i;
    auto& [mn, mx] = v[i].ss;
    cin >> mn >> mx;
    acumMn += mn; acumMx += mx;
    ans[i] = mx;
  }
  sort(all(v), [&](auto a, auto b) {
    auto a_p = a.ss, b_p = b.ss;
    int diffA = a_p.ss - a_p.ff;
    int diffB = b_p.ss - b_p.ff;
    return diffA > diffB;
  });
  if (acumMn > sumTime || acumMx < sumTime) {
    cout << "NO";
    return;
  }
  for (int i = 0; i < d; i++) {
    auto target = v[i].ss;
    int idx = v[i].ff;

    if (acumMx == sumTime) {
      cout << "YES\n";
      for (int x : ans) cout << x << ' ';
      return;
    } else if (acumMx > sumTime) {
      int diff = target.ss - target.ff;
      ans[idx] = target.ff;
      acumMx -= diff;
    } 
    if (acumMx < sumTime) {
      int res = sumTime - acumMx;
      ans[idx] += res;
      acumMx += res;
    }
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  //cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://codeforces.com/contest/4/problem/B