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
  int n, t; cin >> n >> t;
  vector<int> p(n);
  for (int i = 1; i < n; i++) {
    int x; cin >> x;
    p[i] = i + x;
  }
  int it = 1;
  while (it != t && it < n) {
    it = p[it];
    if (it == t) {
      cout << "YES";
      return;
    }
  }
  cout << "NO";
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

// https://codeforces.com/contest/500/problem/A