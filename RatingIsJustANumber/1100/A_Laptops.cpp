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
  int n; cin >> n;
  vector<pair<int, int>> v(n);
  for (auto& [p, c] : v) cin >> p >> c;
  sort(all(v));
  for (int i = 1; i < n; i++) {
    if (v[i-1].ff < v[i].ff && v[i-1].ss > v[i].ss) {
      cout << "Happy Alex";
      return;
    }
  }
  cout << "Poor Alex";
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

// https://codeforces.com/contest/456/problem/A