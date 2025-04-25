#include <bits/stdc++.h>

using namespace std;

void solve() {
  string w; cin >> w;
  if (w.size() > 10) {
    cout << w[0] << w.size()-2 << w[w.size()-1] << '\n';
  } else {
    cout << w << '\n';
  }
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