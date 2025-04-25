#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  int ans = 0, cantidad = 0;
  while (n--) {
    string cmd; cin >> cmd;
    if (cmd[0] == '+') cantidad++;
    else if (cmd[0] == '-' && cantidad > 0) cantidad--;
    else {
      for (int i=0; i<cmd.size(); i++) {
        if (cmd[i] == ':') {
          ans += (cmd.size() - i - 1) * cantidad;
          break;
        }
      }
    }
  }
  cout << ans << '\n';
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

// https://codeforces.com/problemset/problem/5/A