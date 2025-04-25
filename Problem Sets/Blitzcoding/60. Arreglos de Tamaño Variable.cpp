#include <bits/stdc++.h>
using namespace std;

int main() {
  // Obtenemos el número de casos de la 1era línea de entrada
  int casos; cin >> casos;
  
  while (casos--) {
    // Obtenemos "t" y "q"
    int t, q; cin >> t >> q;

    // Creamos un vector de vectores o "matriz"
    vector<vector<int>> v;
    
    while (t--) {
      // Obtenemos el tamaño del subarreglo "n"
      int n; cin >> n;
      vector<int> subv(n);
      for (int i = 0; i < n; i++) {
        cin >> subv[i];
      }

      // Agregamos el subarreglo a la matriz
      v.push_back(subv);
    }

    while (q--) {
      // Obtenemos "pos" e "idx"
      int pos, idx; cin >> pos >> idx;
      cout << v[pos][idx] << endl;
    }
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/60