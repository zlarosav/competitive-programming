#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  string terreno; cin >> terreno;

  int unosMax = 0;
  int unos = 0;
  for (int i=0; i<n; i++) {
    if (terreno[i] == '1') {
      unos++;
    } else {
      unosMax = max(unos, unosMax);
      unos = 0;
    }
  }
  
  unosMax = max(unos, unosMax);
  cout << unosMax << endl;
}

int main() {
  int numCasos; cin >> numCasos;
  while (numCasos--) {
    solve();
  }

  return 0;
}