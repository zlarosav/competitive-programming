#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> a(n); 
  for (int& i : a) cin >> i;
  sort(a.begin(), a.end());
  
  int m; cin >> m;
  vector<int> b(m); 
  for (int& i : b) cin >> i;
  sort(b.begin(), b.end());

  // n < m
  vector<int> ans;
  int up = 0, down = 0;
  while (down < m) {
    if (a[up] == b[down]) {
      up++;
      down++;
    } else {
      if (ans.empty() || ans.back() != b[down]) ans.push_back(b[down]);
      down++;
    }
  }

  for (int& i : ans) cout << i << ' ';
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