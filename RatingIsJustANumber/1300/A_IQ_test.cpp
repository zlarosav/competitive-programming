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
  vector<int> v(n);
  for (int& i : v) cin >> i;
  int impares = 0;
  for (int i = 0; i < 3; i++) if (v[i] & 1) impares++;
  int pares = 3 - impares;
  int paridad = (pares > impares ? 0 : 1);
  for (int i = 0; i < n; i++) {
    if ((!paridad && (v[i] & 1)) || (paridad && !(v[i] & 1))) {
      cout << i+1;
      return;
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