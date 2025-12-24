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

bool verify(int n) {
  string s = to_string(n);
  for (char ch : s) {
    if (ch != '4' && ch != '7') return false;
  }
  return true;
}

void solve() {
  int n; cin >> n;
  if (verify(n)) {
    cout << "YES";
    return;
  }
  vector<int> div;
  for (int d = 1; d * d <= n; d++) {
    if (n % d == 0) {
      div.pb(d);
      if (n / d != d) div.pb(n/d);
    }
  }
  for (int x : div) {
    if (verify(x)) {
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

// https://codeforces.com/contest/122/problem/A