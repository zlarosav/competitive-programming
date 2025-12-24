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
  string s, ans = ""; cin >> s;
  for (int i = 0; i < sz(s); i++) {
    int dgt = s[i] - '0';
    if ((dgt == 9 && i == 0) || dgt < 5) ans += s[i];
    else ans += (9 - dgt) + '0';
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

// https://codeforces.com/contest/514/problem/A