#include <bits/stdc++.h>

using namespace std;

void solve() {
  string cadena; cin >> cadena;
  int counter = 0;
  for (int i=0; i<cadena.size(); i++) {
    if (cadena[i] == 'O') {
      counter++;
    }
  }
  cout << counter << endl;
}

int main() {
  int numCasos; cin >> numCasos;
  while (numCasos--) {
    solve();
  }

  return 0;
}