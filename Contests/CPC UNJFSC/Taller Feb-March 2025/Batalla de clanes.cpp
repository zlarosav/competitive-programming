/*
  TEMA: STL (Vectores)
  NIVEL: Fácil
*/


#include <bits/stdc++.h>

using namespace std;

int main() {
  int numCasos; 
  cin >> numCasos;

  while (numCasos--) {
    vector<int> a(3), b(3);

    for (int i = 0; i < 3; i++) {
      cin >> a[i];
    }

    for (int i = 0; i < 3; i++) {
      cin >> b[i];
    }

    int cntA = 0, cntB = 0;

    for (int i = 0; i < 3; i++) {
      if (a[i] > b[i]) {
        cntA++;
      } else {
        cntB++;
      }
    }

    if (cntA > cntB) {
      cout << "Lava Hounds" << endl;
    } else {
      cout << "Royal Dragons" << endl;
    }
  }

  return 0;
}