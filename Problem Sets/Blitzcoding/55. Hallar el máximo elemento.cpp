#include <bits/stdc++.h>
using namespace std;

int main() {
  // Obtenemos el número de casos de la 1era línea de entrada
  int casos; cin >> casos;

  while (casos--) {
    // Obtenemos la cantidad de elementos "n"
    int n; cin >> n;

    // Declaramos una variable que almacenará la edad máxima.
    // La inicializamos en 13, ya que la mínima edad posible es 13.
    int maximaEdad = 13;

    // Analizamos cada elemento por separado en un bucle
    for (int i = 0; i < n; i++) {
      // Almacenamos el elemento analizado en la variable "edad"
      int edad; cin >> edad;

      // Si la edad analizada es mayor que la variable "maximaEdad"
      // cambiamos el valor de maximaEdad por la edad analizada
      if (edad > maximaEdad) {
        maximaEdad = edad;
      }
    }

    cout << maximaEdad << endl;
  }

  return 0;
}

// https://www.hackerrank.com/challenges/c-tutorial-functions/problem?isFullScreen=true
// https://blitzcoding.com/problem-detail/55