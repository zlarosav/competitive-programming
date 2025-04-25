#include <bits/stdc++.h>

using namespace std;

int main() {
  int N = 13;

  for (int div = 2; div * div <= N; div++) {
    if (N % div == 0) {
      cout << "No es primo";
      return 0;
    }
  }
  cout << "Sí es primo";

  return 0;
}