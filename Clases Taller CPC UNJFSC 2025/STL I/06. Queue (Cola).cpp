#include <bits/stdc++.h>

using namespace std;

int main() {
  queue<int> q; // Cola sin elementos

  cout << q.size(); // Tamaño del vector
  cout << q.empty(); // "true" si está vacío

  cout << q.front(); // Primer elemento
  cout << q.back(); // Último elemento

  q.push(10); // Añadir al último
  q.pop(); // Eliminar el primero

  return 0;
}