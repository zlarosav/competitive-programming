#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n, m, k; cin >> n >> m >> k;
  vector<int> desire(n), sizes(m);
  for (int& i : desire) cin >> i;
  sort(desire.begin(), desire.end());
  for (int& i : sizes) cin >> i;
  sort(sizes.begin(), sizes.end());

  int ans = 0, left = 0;
  for (int curr : desire) {
    while (left < m) {
      int sz = sizes[left];
      if (sz < curr - k) {
        left++;
        continue;
      }
      if (sz > curr + k) break;
      
      ans++; 
      left++;
      break;
    }
  }
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