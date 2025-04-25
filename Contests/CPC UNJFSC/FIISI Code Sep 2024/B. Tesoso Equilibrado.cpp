#include <bits/stdc++.h>

using namespace std;

void solve() {
  string num; cin >> num;
  int der = 0, izq = 0;
  for (int i=0; i<3; i++) {
    der += num[i];
  }
  for (int i=3; i<6; i++) {
    izq += num[i];
  }
  if (der == izq) {
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