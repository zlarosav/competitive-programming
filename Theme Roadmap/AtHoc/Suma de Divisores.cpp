/*
  https://omegaup.com/arena/problem/Suma-de-Divisores/
  Tema: Bucles y Múltiplos
*/

#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  long long N, A, B; cin >> N >> A >> B;
  long long suma = 0;
  
  long long kA = (N - 1) / A;
  suma += A * (kA * (kA + 1) / 2);

  long long kB = (N - 1) / B;
  suma += B * (kB * (kB + 1) / 2);

  long long kC = (N - 1) / lcm(A, B);
  suma -= lcm(A, B) * (kC * (kC + 1) / 2);

  cout << suma;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  //cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}