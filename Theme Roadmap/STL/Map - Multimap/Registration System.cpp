#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  map<string, int> regist;
  for (int i = 0; i < n; i++) {
    string x; cin >> x;
    (regist[x] >= 1 ? (cout << x << regist[x]) : cout << "OK") << '\n';
    regist[x]++;
  }
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

// https://codeforces.com/problemset/problem/4/C