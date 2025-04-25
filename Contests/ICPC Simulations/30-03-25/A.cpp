#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

using ll = long long;

void solve() {
  ll d; cin >> d;
  vector<pair<ll, ll>> ans;

  for (ll a = 1; a * a <= 2*d; a++) {
    if (2*d % a == 0) {
      ll b = 2*d / a;
      if (a < b) {
        ll m = (a+b-1)/2;
        ll n = (b-a-1)/2;
        //if (m*(m+1) - n*(n+1) != 2*d) continue;
        if ((m-n)*(m+n+1) != 2*d) continue;
        if (m > n && m > 0 && n > 0) ans.push_back({ n, m });
      }
    }
  }

  cout << ans.size() << '\n';
  for (auto& p : ans) {
    cout << p.first << ' ' << p.second << '\n';
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