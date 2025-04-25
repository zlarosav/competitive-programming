#include <bits/stdc++.h>

using namespace std;

int main() {
  // Obtenemos el número de casos de la 1era línea de entrada
  int casos; cin >> casos;
  
  while (casos--) {
    // Creamos un vector de caracteres "ans" (answer -> respuesta)
    vector<char> ans;

    // Iteramos 8x8 veces
    for (int i = 0; i < 8; i++) {
      for (int j = 0; j < 8;j++) {
        // Obtenemos cada caracter para analizarlo
        char x; cin >> x;
        // Guardamos únicamente los caracteres diferentes a "." en el vector
        if (x != '.') ans.push_back(x);
      }
    }

    // Imprimimos los valores del vector consecutivamente sin espacios
    for (int i = 0; i < ans.size(); i++) {
      cout << ans[i];
    }

    // Agregamos un salto de línea
    cout << endl;
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/59