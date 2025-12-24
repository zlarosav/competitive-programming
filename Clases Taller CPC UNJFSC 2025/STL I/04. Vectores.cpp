#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> v1; // Vector sin elementos (vacío)
  vector<int> v2 = {1, 2, 3, 1}; // Con elementos definidos
  vector<int> v3(10); // Con 10 elementos (todos son 0 por defecto)
  vector<int> v4(8, 3); // Con 8 elementos (todos serán 3)

  vector<int> edades = {18, 21, 17, 20, 18};
  edades.push_back(15); // Añadir elemento
  edades.pop_back(); // Quitar elemento

  cout << edades.size(); // Tamaño del vector
  cout << edades.empty(); // "true" si está vacío
  
  cout << edades[2]; // Imprime el tercer elemento
  cout << edades.front(); // Primer elemento
  cout << edades.back(); // Último elemento
  
  edades.resize(10); // Cambia el tamaño a 10
  edades.clear(); // Vacía el vector

  vector<int>::iterator it1 = edades.begin();
  vector<int>::iterator it2 = edades.end();
  vector<int>::reverse_iterator it3 = edades.rbegin();
  vector<int>::reverse_iterator it4 = edades.rend();

  return 0;
}