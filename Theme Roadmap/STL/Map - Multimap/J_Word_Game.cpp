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
  map<string, int> freq;
  vector<vector<string>> v(3, vector<string>(n));
  for (auto& x : v) {
    for (auto& w : x) {
      cin >> w;
      freq[w]++;
    }
  }
  vector<int> ans(3);
  for (int i = 0; i < 3; i++) {
    for (auto& w : v[i]) {
      if (freq[w] == 2) ans[i]++;
      else if (freq[w] == 1) ans[i] += 3; 
    }
  }
  for (int& i : ans) cout << i << ' ';
  cout << '\n';
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