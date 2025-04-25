#include <bits/stdc++.h>

using namespace std;

int main() {
  long long N = 1000000000000;

  vector<long long> divisores;
  for (long long div = 1; div * div <= N; div++) {
    if (N % div == 0) {
      divisores.push_back(div);
      if (N / div != div) {
        divisores.push_back(N / div);
      }
    }
  }

  cout << divisores.size() << endl;
  for (int i = 0; i < divisores.size(); i++) {
    cout << divisores[i] << " ";
  }

  return 0;
}