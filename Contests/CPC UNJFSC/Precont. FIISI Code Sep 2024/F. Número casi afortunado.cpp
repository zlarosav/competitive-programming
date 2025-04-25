#include <bits/stdc++.h>

using namespace std;

void solve() {
  string numero; cin >> numero;
  
  int cuenta = 0;
  for (int i=0; i < numero.size(); i++) {
    if (numero[i] == '4' || numero[i] == '7') {
      cuenta++;
    }
  }

  if (cuenta == 4 || cuenta == 7) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}


int main() {
  int numCasos; cin >> numCasos;
  while (numCasos--) {
    solve();
  }

  return 0;
}