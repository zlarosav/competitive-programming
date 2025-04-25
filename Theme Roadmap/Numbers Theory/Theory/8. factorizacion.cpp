#include <bits/stdc++.h>

using namespace std;

int main() {
  int N = 18;

  vector<pair<int, int>> factores;
  if (N == 1) {
    cout << "1 1";
    return 0;
  }

  for (int p = 2; p * p <= N; p++) {
    if (N % p == 0) {
      int exp = 0;
      while (N % p == 0) {
        exp++;
        N /= p;
      }
      factores.push_back({ p, exp });
    }
  }
  if (N != 1) factores.push_back({ N, 1 });

  /* Imprimir las parejas */
  for (int i = 0; i < factores.size(); i++) {
    cout << factores[i].first << " " << factores[i].second << endl;
  }

  return 0;
}