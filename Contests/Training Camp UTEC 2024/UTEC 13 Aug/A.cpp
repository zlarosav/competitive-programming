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
  for(int& i : v) cin >> i;
  sort(v.begin(), v.end());
  long long p; cin >> p;
  while (p--) {
    int c; cin >> c;
    int L = 0, R = n-1;
    while (L < R) {
      int mid = (L+R+1)/2;
      if (c >= v[mid]) L = mid;
      else R = mid - 1;
    }
    cout << (v[L] != c ? 0 : L+1) << "\n";
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