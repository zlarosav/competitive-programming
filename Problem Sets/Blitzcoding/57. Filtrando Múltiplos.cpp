#include <bits/stdc++.h>
using namespace std;

int main() {
  // Obtenemos el número de casos de la 1era línea de entrada
  int casos; cin >> casos;
  
  while (casos--) {
    // Obtenemos la cantidad de elementos "n"
    int n; cin >> n;

    // Almacenamos los elementos en un arreglo dinámico o vector
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
      cin >> v[i];
    }

    // Obtenenemos el "k"
    int k; cin >> k;

    // Implementamos la lógica de reimpresión de la secuencia
    for (int i = 0; i < n; i++) {
      if (v[i] % k == 0) {
        cout << v[i] << " ";
      } else {
        cout << "X ";
      }
    }

    // Agregamos un salto de línea
    cout << endl;
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/57