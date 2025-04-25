#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int n; cin >> n;
  int dias = n % 7;
  if (dias == 1) {
    cout << "LUNES" << endl;
  } else if (dias == 2) {
    cout << "MARTES" << endl;
  } else if (dias == 3) {
    cout << "MIERCOLES" << endl;
  } else if (dias == 4) {
    cout << "JUEVES" << endl;
  } else if (dias == 5) {
    cout << "VIERNES" << endl;
  } else if (dias == 6) {
    cout << "SABADO" << endl;
  } else {
    cout << "DOMINGO" << endl;
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