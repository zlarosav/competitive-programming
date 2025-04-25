#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n; cin >> n;
  vector<int> v(n);

  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }

  bool sw; cin >> sw;

  for (int i = 0; i < n; i++) {
    if (sw == (v[i] % 2 == 0)) continue;
    cout << v[i] << " ";
  }

  return 0;
}

// https://omegaup.com/arena/UNJFSC2024/practice/#problems/Imprimiendo-enteros-por-paridad