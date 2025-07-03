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
  bool todosMayus = 1, todosMenosPrimera = 1;
  if (isupper(s[0])) todosMenosPrimera = 0;
  for (int i = 0; i < sz(s); i++) {
    if (todosMayus && islower(s[i])) todosMayus = 0;
    if (todosMenosPrimera && i > 0 && islower(s[i])) todosMenosPrimera = 0;
  }
  if (!todosMayus && !todosMenosPrimera) {
    cout << s;
    return;
  }
  string ans = ""; ans += (todosMayus ? tolower(s[0]) : toupper(s[0]));
  for (int i = 1; i < sz(s); i++) {
    ans += tolower(s[i]);
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

// https://codeforces.com/contest/131/problem/A