#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  long long a, b, c, x, y; cin >> a >> b >> c >> x >> y;
  long long sobrante_perros = max(0LL, x - a);
  long long sobrante_gatos = max(0LL, y - b);
  if (sobrante_perros + sobrante_gatos <= c) {
    cout << "SI" << endl;
  } else {
    cout << "NO" << endl;
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