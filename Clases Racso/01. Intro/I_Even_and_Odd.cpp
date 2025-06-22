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

ll sumaPA(ll start, ll end) {
  ll n = ((end - start) / 2) + 1;
  return n * (start + end) / 2;
}

void solve() {
  ll a, b; cin >> a >> b;
  ll sumapares = sumaPA((a&1 ? a+1 : a), (b&1 ? b-1 : b));
  ll sumaimpares = sumaPA((a&1 ? a : a+1), (b&1 ? b : b-1));
  cout << (sumapares - sumaimpares) << '\n';
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