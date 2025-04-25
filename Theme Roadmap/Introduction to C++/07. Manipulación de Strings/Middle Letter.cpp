#include <bits/stdc++.h>

using namespace std;

void solve() {
  string w; cin >> w;
  cout << w[((w.size()+1)/2)-1] << endl;
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

// https://atcoder.jp/contests/abc266/tasks/abc266_a?lang=en