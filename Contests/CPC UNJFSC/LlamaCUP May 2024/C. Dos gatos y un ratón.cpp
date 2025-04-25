#include <bits/stdc++.h>

using namespace std;

void solve() {
  int a, b, c; cin >> a >> b >> c;
  if (abs(a - c) == abs(b - c)) cout << "raton C" << endl;
  if (abs(a - c) > abs(b - c)) cout << "gato B" << endl;
  if (abs(a - c) < abs(b - c)) cout << "gato A" << endl;
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

// https://omegaup.com/arena/LLC01/practice/#problems/Dos-gatos-y-un-raton