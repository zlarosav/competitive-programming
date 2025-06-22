#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  int n; cin >> n;
  map<int, int> freq;
  for (int i = 0; i < n; i++) {
    int curr; cin >> curr;
    freq[curr]++;
  }
  int ans = 0;
  for (auto& [_, cnt] : freq) {
    ans += (cnt / 2);
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