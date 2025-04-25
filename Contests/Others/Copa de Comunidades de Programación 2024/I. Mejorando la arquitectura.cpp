#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, q; cin >> n >> q;
  int v[n];
  for (auto& x : v) cin >> x;
  
  while (q--) {
    char t; int x, y; 
    cin >> t >> x >> y;
    if (t == 'M') {
      int mult = 1;
      for(int i = x-1; i <= y-1; i++) {
        if (v[i] == 0) { mult = 0;  break; }
        mult *= v[i];
      }

      if (mult < 0) cout << '-' << endl;
      else if (mult > 0) cout << '+' << endl;
      else if (mult == 0) cout << 0 << endl;

    } else if (t == 'C') {
      v[x-1] = y;
    }
  }
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