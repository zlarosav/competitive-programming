#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, m; cin >> n >> m;
  vector<int> v(n);
  for (int& i : v) cin >> i;
  
  int max = *max_element(v.begin(), v.end());
  auto sub = [&](long long mid) {
    int suma = 0;
    for (int i=0; i<n; i++) {
      suma += v[i];
      if (suma > mid) return true;
    }
    return false;
  };

  long long R = 0; 
  for (int i = 0; i < n; i++) R += v[i];
  long long L = 0;
  while (L < R) {
    long long mid = (L + R)/2;
    if (sub(mid)) L = mid;
    else R = mid - 1;
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