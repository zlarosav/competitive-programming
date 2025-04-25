#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

const int MAX_VAL = 100000; // Máximo valor en las matrices.
vector<bool> isPrime(MAX_VAL + 1, true); // Criba de Eratóstenes.
vector<int> nextPrime(MAX_VAL + 1);     // Siguiente primo para cada número.

void precomputePrimes() {
  isPrime[0] = isPrime[1] = false;
  for (int i = 2; i * i <= MAX_VAL; i++) {
    if (isPrime[i]) {
      for (int j = i * i; j <= MAX_VAL; j += i) {
        isPrime[j] = false;
      }
    }
  }
  int lastPrime = -1;
  for (int i = MAX_VAL; i >= 0; i--) {
    if (isPrime[i]) lastPrime = i;
    nextPrime[i] = lastPrime;
  }
}

void solve() {
  int n, m; cin >> n >> m;
  vector<vector<int>> matrix(n, vector<int>(m));

  // Leer la matriz.
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> matrix[i][j];
    }
  }

  // Calcular el costo mínimo para cada fila.
  vector<int> rowCost(n, 0);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      rowCost[i] += nextPrime[matrix[i][j]] - matrix[i][j];
    }
  }

  // Calcular el costo mínimo para cada columna.
  vector<int> colCost(m, 0);
  for (int j = 0; j < m; j++) {
    for (int i = 0; i < n; i++) {
      colCost[j] += nextPrime[matrix[i][j]] - matrix[i][j];
    }
  }

  // Encontrar el costo mínimo entre filas y columnas.
  int minCost = *min_element(rowCost.begin(), rowCost.end());
  minCost = min(minCost, *min_element(colCost.begin(), colCost.end()));

  cout << minCost << '\n';
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  precomputePrimes();

  int t = 1; 
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
