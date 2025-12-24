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
  string s; cin >> s;
  vector<int> heavy, metal;
  for (int i = 0; i+4 < sz(s); i++) {
    if (s[i] != 'h' && s[i] != 'm') continue;
    if (s[i] == 'h' && s[i+1] == 'e' && s[i+2] == 'a' && s[i+3] == 'v' && s[i+4] == 'y') {
      heavy.pb(i);
      i += 3;
    } else if (s[i] == 'm' && s[i+1] == 'e' && s[i+2] == 't' && s[i+3] == 'a' && s[i+4] == 'l') {
      metal.pb(i);
      i += 3;
    }
  }
  
  int cnt = sz(metal);
  int l = 0, r = 0;
  ll ans = 0;
  while (l < sz(heavy) && r < sz(metal)) {
    if (heavy[l] < metal[r]) {
      ans += cnt - r;
      l++;
    } else {
      r++;
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

// https://codeforces.com/contest/318/problem/B