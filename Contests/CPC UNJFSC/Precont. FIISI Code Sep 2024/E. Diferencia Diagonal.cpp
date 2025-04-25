#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  int pos = 1, acumulado = 0;
  for (int i=0; i<n; i++) {
    for (int j=0; j<n; j++) {
      int e; cin >> e;
      if (pos==1 || pos==9) {
        acumulado += e;
      }

      if (pos==3 || pos==7) {
        acumulado -= e;
      }

      pos++;
    }
  }
  cout << abs(acumulado) << endl;
}

int main() {
  int numCasos; cin >> numCasos;
  while (numCasos--) {
    solve();
  }

  return 0;
}