#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> v(n);
  for (int& i : v) cin >> i;
  int suma = 0;
  for (int i=0; i < n; ) {
    if (i == n-2) {
      suma += abs(v[i]-v[i+1]);
      dbg(i, suma);
      break;
    } 
    if (v[i]-v[i+1] > v[i]-v[i+2]) {
      suma += abs(v[i]-v[i+1]);
      dbg(i, suma);
      i++;
    } else {
      suma += abs(v[i]-v[i+2]);
      dbg(i, suma);
      i+=2;
    }
  }
  cout << suma;
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