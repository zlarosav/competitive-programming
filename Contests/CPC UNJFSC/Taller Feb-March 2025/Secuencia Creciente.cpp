/*
  TEMA: STL (Vectores)
  Puede ser resuelto sin vectores
  NIVEL: Fácil
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  int numCasos; 
  cin >> numCasos;

  while (numCasos--) {
    int N; cin >> N;
    
    vector<int> secuencia(N);
    for (int i = 0; i < N; i++) {
      cin >> secuencia[i];
    }

    int ans = 1;
    for (int i = 1; i < N; i++) {
      if (secuencia[i] < secuencia[i - 1]) ans++;
    }

    cout << ans << endl;
  }

  return 0;
}
