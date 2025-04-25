#include <bits/stdc++.h>

using namespace std;

int main() {
  int numCasos; 
  cin >> numCasos;

  while (numCasos--) {
    long long k; cin >> k;
    long long izq = 1, der = 1e9 + 1; 
    
    while (izq <= der) {
      long long mid = izq + (der - izq) / 2;
      if (mid * mid >= k) der = mid - 1;
      else izq = mid + 1;
    }
    
    cout << izq << endl;
  }

  return 0;
}