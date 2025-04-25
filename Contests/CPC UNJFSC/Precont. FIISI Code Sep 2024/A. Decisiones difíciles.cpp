#include <bits/stdc++.h>

using namespace std;

void solve() {
  string M, C, S; cin >> M >> C >> S;
  if ((M=="piedra" && C=="tijeras" && S=="tijeras") || (M=="papel" && C=="piedra" && S=="piedra") || (M=="tijeras" && C=="papel" && S=="papel")) {
    cout << 'M' << endl;
  } else if ((M=="tijeras" && C=="piedra" && S=="tijeras") || (M=="piedra" && C=="papel" && S=="piedra") || (M=="papel" && C=="tijeras" && S=="papel")) {
    cout << 'C' << endl;
  } else if ((M=="tijeras" && C=="tijeras" && S=="piedra") || (M=="piedra" && C=="piedra" && S=="papel") || (M=="papel" && C=="papel" && S=="tijeras")) {
    cout << "M" << endl;
  } else {
    cout << '?' << endl;
  }
}

int main() {
  int numCasos; cin >> numCasos;
  while (numCasos--) {
    solve();
  }

  return 0;
}