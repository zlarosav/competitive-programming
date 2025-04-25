#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string a, b; cin >> a >> b;
  int ans = 0;
  for (int i = 0; i < b.size(); i++) { // recorremos el 2do
    for (int j = 0; j < a.size(); j++) { // buscando en el 1ro
      if (b[i] == a[j]) {
        break;
      }
      if (j == a.size() - 1) {
        ans++;
      }
    }
  }
  cout << ans << endl;
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
