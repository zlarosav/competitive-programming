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
  ll A, B, C; cin >> A >> B >> C;
  ll diff = A*A - C;
  ll xy_yz_xz = diff / 2;
  vector<ll> divs;
  for (ll d = 1; d * d <= B; d++) {
    if (B % d == 0) {
      divs.push_back(-1*d);
      divs.push_back(d);
      if (d * d != B) {
        divs.push_back(-1*B/d);
        divs.push_back(B/d);
      }
    }
  }
  for (ll& x : divs) {
    if (x*x*x - A*x*x + xy_yz_xz*x - B != 0) continue;
    ll b = x - A, c = B / x;
    ll disc = b*b - 4*c;
    if (disc < 0) continue;
    ll r = (ll)sqrt(disc);
    if (r*r != disc) continue;
    ll y = (-b + r), z = (-b - r);
    if (y & 1 || z & 1) continue;
    y /= 2; z /= 2;
    if (x == y || x == z || y == z) continue;
    vector<ll> v = {x, y, z};
    sort(all(v));
    cout << v[0] << ' ' << v[1] << ' ' << v[2] << '\n';
    return;
  }
  cout << "No solution.\n";
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