#include <bits/stdc++.h>

using namespace std;

int main() {
  int casos; cin >> casos;
  while (casos--) {
    int n; cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    
    int mayor = INT_MIN, segMayor = INT_MIN;
    for (int i = 0; i < n; i++) {
      if (arr[i] > mayor) {
        segMayor = mayor;
        mayor = arr[i];
      } else if (arr[i] > segMayor && arr[i] != mayor) {
        segMayor = arr[i];
      }
    }
  
    int menor = INT_MAX, segMenor = INT_MAX;
    for (int i = 0; i < n; i++) {
      if (arr[i] < menor) {
        segMenor = menor;
        menor = arr[i];
      } else if (arr[i] < segMenor && arr[i] != menor) {
        segMenor = arr[i];
      }
    }
  
    cout << segMenor << ' ' << segMayor << '\n';
  }

  return 0;
}