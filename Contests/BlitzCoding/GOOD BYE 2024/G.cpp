#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string line; cin >> line;
  int maxLength = 1;
  for (int i = 0; i < line.size(); i++) {
    int l = i, r = i;
    while (l >= 0 && r < line.size() && line[l] == line[r]) {
      l--;
      r++;
    }
    int len = r - l - 1;
    maxLength = max(maxLength, len);
  }
  cout << maxLength << endl;
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