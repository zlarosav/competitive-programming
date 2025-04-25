#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  string mesa; cin >> mesa;
  vector<string> mano(5);
  for (string& i : mano) cin >> i;

  char rango_mesa = mesa[0], palo_mesa = mesa[1];
  for (string& carta : mano) {
    if (carta[0] == rango_mesa || carta[1] == palo_mesa) {
      cout << "SI" << '\n';
      return;
    }
  }
  cout << "NO" << '\n';
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

// https://blitzcoding.com/problem-detail/53