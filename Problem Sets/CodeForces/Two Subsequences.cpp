#include <bits/stdc++.h>

using namespace std;

void solve() {
  string s; cin >> s;
  char a = *min_element(s.begin(), s.end());
  cout << a << ' ';
  bool kick = false;
  for (char ch : s) {
    if (!kick && ch == a) {
      kick = true;
      continue;
    }
    cout << ch;
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

// http://codeforces.com/contest/1602/problem/A