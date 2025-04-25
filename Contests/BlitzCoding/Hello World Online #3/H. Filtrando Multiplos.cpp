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
  for (int& i : v) cin >> i;
  int m; cin >> m;
  for (int& i : v) {
    if (i%m==0) {
      cout << i << ' ';
    } else {
      cout << "X ";
    }
  }
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