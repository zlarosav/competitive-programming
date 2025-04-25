#include <bits/stdc++.h>

using namespace std;

int main() {
  int N = 1000;

  vector<int> divisores;
  for (int div = 1; div <= N; div++) {
    if (N % div == 0) {
      divisores.push_back(div);
    }
  }

  cout << divisores.size() << endl;
  for (int i = 0; i < divisores.size(); i++) {
    cout << divisores[i] << " ";
  }

  return 0;
}