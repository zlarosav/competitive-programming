#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, k; cin >> n >> k;
  vector<int> v(n);
  for (int& i : v) cin >> i;
  dbg(v);
  /* int i = 0, j, ans = 0;
  while (i < n-1) {
    j = i+1;
    while (j < n) {
      if ((v[i] + v[j]) % k == 0) ans++;
      j++;
    }
    i++;
  }
  cout << ans; */
  vector<int> freq(k);
  int ans = 0;
  for (int i = 0; i < n; i++) {
    int resto = v[i] % k;
    int need = (k - resto) % k;
    ans += freq[need];
    freq[resto]++;
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