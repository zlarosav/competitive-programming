#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string c; cin >> c;
  int max_index = 0;
  char max_value = c[0];
  for (int i = 1; i < c.size(); i++) {
    if (c[i] > max_value) {
      max_value = c[i];
      max_index = i;
    }
  }
  cout << max_index << endl;
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