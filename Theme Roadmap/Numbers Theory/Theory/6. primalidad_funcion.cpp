#include <bits/stdc++.h>

using namespace std;

bool esPrimo(int N) {
  for (int div = 2; div * div <= N; div++) {
    if (N % div == 0) {
      return false;
    }
  }
  return true;
}

int main() {
  int N = 13;

  if (esPrimo(N) == true) {
    cout << "Es primo.";
  } else {
    cout << "No es primo.";
  }

  return 0;
}