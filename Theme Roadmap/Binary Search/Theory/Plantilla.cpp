#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

int main() {
  vector<int> numeros = {1, 2, 3, 4, 5, 6, 7, 9, 10};
  int x = 7; // Número que buscamos
      
  // Obligatorio ordenar los elementos antes de hacer la búsq. binaria
  sort(numeros.begin(), numeros.end()); 
  
  //   Derecha                 Izquierda
  int left = 0, right = numeros.size() - 1;
  
  while (left <= right) {
    int mid = left + (right - left) / 2;
    
    if (numeros[mid] == x) {
      cout << "La posición del número es: " << mid;
      return 0;
    }
    
    if (numeros[mid] < x) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }
  
  cout << "No se encontró el número";

  return 0;
}