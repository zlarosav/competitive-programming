#include <bits/stdc++.h>

using namespace std;

int main() {
  int numCasos; 
  cin >> numCasos;

  while (numCasos--) {
    long long N, A, B; cin >> N >> A >> B;
  
    long long suma = 0;
    for (long long i = 1; i < N; i++) {
      if (i % A == 0 || i % B == 0) {
        suma += i;
      }
    }
    
    cout << suma << endl;
  }

  return 0;
}