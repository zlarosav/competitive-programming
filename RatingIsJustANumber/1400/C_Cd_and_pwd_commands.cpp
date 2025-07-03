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
  vector<string> v;
  while (n--) {
    string cmd; cin >> cmd;
    if (cmd == "pwd") {
      cout << '/';
      for (string x : v) cout << x << '/';
      cout << '\n';
    } else {
      string ruta, curr; cin >> ruta;
      stringstream ss(ruta);
      while (getline(ss, curr, '/')) {
        if (curr == "") {
          v.clear();
          continue;
        }
        if (curr == "..") v.pop_back();
        else v.push_back(curr);
      }
    }
  }
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

// https://codeforces.com/contest/158/problem/C