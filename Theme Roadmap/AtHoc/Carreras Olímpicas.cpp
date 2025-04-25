/*
  Carreras Olímpicas
  https://omegaup.com/course/MPC/assignment/C1072024#problems
  Tema: Condicionales, bucles, variables contadoras
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
  int N, T; cin >> N >> T;
  int menores = 0, iguales = 0;
  while (N--) {
    int actual; cin >> actual;
    if (actual < T) menores++;
    else if (actual == T) iguales++;
  }
  cout << menores << ' ' << iguales;
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