#include <bits/stdc++.h>

using namespace std;

void solve() {
  string num; cin >> num;
  int count = 0;
  for (char n : num) {
    if (n == '4' || n == '7') count++;
  }
  if (count == 4 || count == 7) cout << "YES";
  else cout << "NO";
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

// https://codeforces.com/contest/110/problem/A