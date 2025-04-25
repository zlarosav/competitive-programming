/*
  TEMA: Ordenamiento básico
  NIVEL: Fácil (Problema para confundir)
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int numCasos = 1; 
  cin >> numCasos;
  
  while (numCasos--) {
    int N; cin >> N;
    vector<long long> numeros(N);
    for (int i = 0; i < N; i++) {
      cin >> numeros[i];
    }

    sort(numeros.begin(), numeros.end());
    for (int i = 0; i < N; i++) {
      cout << numeros[i] << " ";
    }
    cout << endl;
  }

  return 0;
}