#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  string s; cin >> s;
  if (n == 1 || (n == 2 && s[0] != s[1])) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
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

// https://codeforces.com/contest/1632/problem/A