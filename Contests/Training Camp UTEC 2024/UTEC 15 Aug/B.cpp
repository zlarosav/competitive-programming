#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, mayor, suma = 0; cin >> n >> mayor;
  for (int i=0; i<n; i++) {
    int c; cin >> c;
    suma += c;
  }
  if (suma < 0) suma = abs(suma);
  int ans = (suma%mayor==0 ? suma/mayor : suma/mayor + 1);
  cout << ans;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}