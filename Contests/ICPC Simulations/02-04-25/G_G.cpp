#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  map<int, int> mp;
  while (n--) {
    int b, d; cin >> b >> d;
    mp[d] = max(mp[d], b);
  }
  if (mp.size() < 10) {
    cout << "MOREPROBLEMS\n";
    return;
  }

  int total = 0;
  for (auto& [d, b] : mp) total += b;
  cout << total << '\n';
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