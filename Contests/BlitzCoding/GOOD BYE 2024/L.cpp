#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  set<char> dulces;
  for (int i = 0; i < n; i++) {
    char l; cin >> l;
    dulces.insert(l);
  }

  int rr = dulces.size();
  cout << min(rr, n/2) << endl;
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