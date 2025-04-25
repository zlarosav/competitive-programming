#include <bits/stdc++.h>

using namespace std;

void solve() {
  string w; cin >> w;
  vector<bool> hello(5, false);
  for (char& c : w) {
    if (!hello[0] && c == 'h') {
      hello[0] = true;
    } else if (hello[0] && !hello[1] && c == 'e') {
      hello[1] = true;
    } else if (hello[0] && hello[1] && !hello[2] && c == 'l') {
      hello[2] = true;
    } else if (hello[0] && hello[1] && hello[2] && !hello[3] && c == 'l') {
      hello[3] = true;
    } else if (hello[0] && hello[1] && hello[2] && hello[3] && !hello[4] && c == 'o') {
      cout << "YES"; return;
    }
  }
  cout << "NO";
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