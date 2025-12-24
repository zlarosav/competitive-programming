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
  ll n, a, b, c; cin >> n >> a >> b >> c;
  ll ans = 0;
  for (ll x = 0; x <= n/a; x++) {
    for (ll y = 0; y <= (n - x*a)/b; y++) {
      ll z = (n - a*x - b*y)/c;
      if (z >= 0 && n == a*x + b*y + c*z) {
        ans = max(ans, x+y+z);
      }
    }
  }
  cout << ans;
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