#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  int ans = 0, cantidad = 0;
  while (n--) {
    string cmd; cin >> cmd;
    if (cmd[0] == '+') {
      cantidad++;
    } else if (cmd[0] == '-' && cantidad > 0) {
      cantidad--;
    } else {
      for (int i=0; i<cmd.size(); i++) {
        if (cmd[i] == ':') {
          ans += (cmd.size() - i - 1) * cantidad;
          break;
        }
      }
    }
  }
  cout << ans << endl;
}

int main() {
  int numCasos; cin >> numCasos;
  while (numCasos--) {
    solve();
  }

  return 0;
}