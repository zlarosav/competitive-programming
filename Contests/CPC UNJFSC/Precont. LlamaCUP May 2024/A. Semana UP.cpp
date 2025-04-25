#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  
  if (n == 1) {
    cout << "lunes" << endl;
  } else if (n == 2) {
    cout << "martes" << endl;
  } else if (n == 3) {
    cout << "miercoles" << endl;
  } else if (n == 4) {
    cout << "jueves" << endl;
  } else if (n == 5) {
    cout << "viernes" << endl;
  } else if (n == 6) {
    cout << "sabado" << endl;
  } else if (n == 7) {
    cout << "domingo" << endl;
  }
  
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; t = 1;
  //cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://omegaup.com/arena/LLAMACUP-2024-1/practice/#problems/Semana-UP