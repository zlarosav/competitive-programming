#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  while (n--) {
    string line; cin >> line;
    string ans = "";
    int count = 1;
    for (int j = 1; j < line.size(); j++) {
      if (line[j] != line[j-1]) {
        ans += to_string(count) + line[j - 1];
        count = 1;
      } else {
        count++;
      }
    }
    ans += to_string(count) + line.back();
    if (ans == "11") ans = "1";
    cout << ans << endl;
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