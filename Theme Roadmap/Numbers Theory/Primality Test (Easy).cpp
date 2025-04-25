/*
  Problema de Test de Primalidad (Number Theory)
  https://blitzcoding.com/problem-detail/43
*/

#include <bits/stdc++.h>

using namespace std;

bool esPrimo(long long  N) {
  for (long long  div = 2; div * div <= N; div++) {
    if (N % div == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int t; cin >> t;
  while (t--) {
    long long N; cin >> N;
    cout << (esPrimo(N) ? "YES" : "NO") << endl;
  }

  return 0;
}