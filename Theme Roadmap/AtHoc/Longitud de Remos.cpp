/*
  Longitud de Remos
  https://omegaup.com/course/MPC/assignment/C1072024#problems
  Tema: Condicionales y Operadores Lógicos
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int L; cin >> L;
  int Li, Ls; cin >> Li >> Ls;
  if (Li <= L && L <= Ls) {
    cout << "Adecuado";
  } else {
    cout << "Inadecuado";
  }
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}