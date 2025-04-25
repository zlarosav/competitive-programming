#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, m, k; cin >> n >> m >> k;
  vector<int> v(n);
  for (int& i : v) cin >> i;
  vector<int> v2 = v;
  sort(v2.begin(), v2.end());
  int parts = n/m;
  int resto = n%m;
  vector<int> subs;
  for (int i=n-1; i>=0; i--) {
    
  }
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