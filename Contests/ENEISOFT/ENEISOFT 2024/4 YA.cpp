#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  long long n, m; cin >> n >> m;

  vector<long long> v(n);
  for (long long& i : v) cin >> i;

  sort(v.begin(), v.end());

  int l = 0, r = 0;
  long long suma = 0, mx = 0;

  while (r < n) {
    suma += v[r];

    while (l <= r && (suma > m || v[r] - v[l] > 1)) {
      suma -= v[l];
      l++;
    }

    mx = max(mx, suma);

    r++;
  }

  //dbg(v);
  
  cout << mx << '\n';
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