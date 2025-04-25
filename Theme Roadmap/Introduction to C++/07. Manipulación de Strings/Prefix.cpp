#include <bits/stdc++.h>

using namespace std;

void solve() {
  string a, b; cin >> a >> b;
  if (b.substr(0, a.size()) == a) cout << "Yes" << endl;
  else cout << "No" << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  //cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://atcoder.jp/contests/abc268/tasks/abc268_b?lang=en