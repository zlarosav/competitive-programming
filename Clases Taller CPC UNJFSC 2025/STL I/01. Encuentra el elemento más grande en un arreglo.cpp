#include <bits/stdc++.h>

using namespace std;

int main() {
  int casos; cin >> casos;
  while (casos--) {
    int n; cin >> n;
    int numeros[n];

    for (int i = 0; i < n; i++) {
      cin >> numeros[i];
    }

    int mayor = INT_MIN;
    for (int i = 0; i < n; i++) {
      mayor = max(mayor, numeros[i]);
    }

    cout << mayor << endl;
  }
  
  return 0;
}