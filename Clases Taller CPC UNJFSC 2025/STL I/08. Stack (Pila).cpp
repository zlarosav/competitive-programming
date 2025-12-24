#include <bits/stdc++.h>

using namespace std;

int main() {
  stack<int> s; // Pila sin elementos

  cout << s.size();  // Tamaño de la pila
  cout << s.empty(); // "true" si está vacía

  cout << s.top(); // Elemento en lo alto de la pila

  s.push(10); // Añadir encima
  s.pop();    // Eliminar el elemento de encima

  return 0;
}