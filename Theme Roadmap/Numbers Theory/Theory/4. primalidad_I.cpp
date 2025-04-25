#include <bits/stdc++.h>

using namespace std;

int main() {
  int N = 12;

  for (int div = 2; div < N; div++) {
    if (N % div == 0) {
      cout << "No es primo";
      return 0;
    }
  }
  cout << "Sí es primo";

  return 0;
}