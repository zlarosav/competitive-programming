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
  int it = 0;
  for (char ch : s) {
    if (it == 0 && ch == 'h') it++;
    else if (it == 1 && ch == 'e') it++;
    else if (it == 2 && ch == 'l') it++;
    else if (it == 3 && ch == 'l') it++;
    else if (it == 4 && ch == 'o') {
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

// https://codeforces.com/contest/58/problem/A