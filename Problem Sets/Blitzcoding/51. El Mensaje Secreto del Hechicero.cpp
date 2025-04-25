#include <bits/stdc++.h>

using namespace std;

void solve() {
  string w; cin >> w;
  int n = w.size();
  cout << w[n/2] << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/51