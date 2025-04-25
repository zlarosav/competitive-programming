#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  int nums[n];
  for (int& x : nums) cin >> x;
  
  int suma = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 != 0) suma += nums[i];
  }

  cout << suma << '\n';
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

// https://blitzcoding.com/problem-detail/46