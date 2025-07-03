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
  int cnt = 0;
  for (int i = 0; i + 3 < sz(s); i++) {
    if (s[i] == '1' && s[i+1] == '1' && s[i+2] == '0' && s[i+3] == '0') cnt++;
  }
  int q; cin >> q;
  while (q--) {
    int x; char v; cin >> x >> v; x--;

    for (int i = max(0, x-3); i <= min(sz(s) - 4, x); i++) {
      if (s[i] == '1' && s[i+1] == '1' && s[i+2] == '0' && s[i+3] == '0') cnt--;
    }

    s[x] = v;
    for (int i = max(0, x-3); i <= min(sz(s) - 4, x); i++) {
      if (s[i] == '1' && s[i+1] == '1' && s[i+2] == '0' && s[i+3] == '0') cnt++;
    }

    cout << (cnt >= 1 ? "YES" : "NO") << '\n';
  }
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