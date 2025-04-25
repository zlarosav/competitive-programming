#include <bits/stdc++.h>

using namespace std;

int main() {
  // Obtenemos el número de casos de la 1era línea de entrada
  int casos; cin >> casos;
  
  while (casos--) {
    // Obtenemos el valor de "n" y "q"
    int n, q; cin >> n >> q;

    // Creamos una matriz, pero solo sabemos el número de cajas pequeñas "n"
    vector<vector<int>> v(n);

    // Recorremos cada query
    while(q--) {
      // Almacenamos el tipo, toda query lo tiene
      int tipo; cin >> tipo;

      // Dependiendo el tipo, se hace una acción diferente
      if (tipo == 0) {
        // Para pushBack(t, x) recibimos "t" y "x"
        int t, x; cin >> t >> x;
        v[t].push_back(x);

      } else if (tipo == 1) {
        // Para dump(t) recibimos solo "t"
        int t; cin >> t;

        // Imprimimos los valores de la caja pequeña "t"
        for (int i = 0; i < v[t].size(); i++) {
          cout << v[t][i] << " ";
        }

        // Agregamos un salto de línea
        cout << endl;

      } else if (tipo == 2) {
        // Para clear(t) recibimos solo "t"
        int t; cin >> t;

        // Eliminamos todos los elementos de la caja pequeña "t"
        v[t].clear();
      }
    }
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/56