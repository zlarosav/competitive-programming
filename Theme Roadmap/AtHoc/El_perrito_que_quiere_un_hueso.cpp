#include <bits/stdc++.h>

using namespace std;

int main() {
  int numCasos = 1; 
  cin >> numCasos;

  while (numCasos--) {
    // Primer hueso
    int olor1, tamano1; cin >> olor1 >> tamano1;

    // Segundo hueso
    int olor2, tamano2; cin >> olor2 >> tamano2;
    
    if (olor1 > olor2 && tamano1 > tamano2) {
      cout << "Hueso 1" << endl;
    } else if (olor1 < olor2 && tamano1 < tamano2) {
      cout << "Hueso 2" << endl;
    } else {
      cout << "Perrito confundido :(" << endl;
    }
  }

  return 0;
}