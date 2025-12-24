#include <bits/stdc++.h>

using namespace std;

int main() {
  deque<int> d; // Deque sin elementos

  cout << d.size();    // Tamaño del deque
  cout << d.empty();   // "true" si está vacío

  cout << d.front();   // Primer elemento
  cout << d.back();    // Último elemento

  d.push_back(10);     // Añadir al final
  d.push_front(5);     // Añadir al inicio

  d.pop_back();        // Eliminar el último
  d.pop_front();       // Eliminar el primero

  cout << d[0];        // Operador [ ]
  
  deque<int>::iterator it = d.begin();
  deque<int>::iterator it = d.end();
  deque<int>::reverse_iterator it = d.rbegin();
  deque<int>::reverse_iterator it = d.rend();

  return 0;
}