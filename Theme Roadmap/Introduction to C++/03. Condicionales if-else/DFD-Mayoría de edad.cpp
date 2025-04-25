#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int num; cin >> num;
  /* OPERADORES TERNARIOS <-> IF-ELSE */
  cout << (num >= 18 ? "MAYOR DE EDAD" : "MENOR DE EDAD");

  return 0;
}

// https://omegaup.com/arena/UNJFSC2024/practice/#problems/DFD-Mayoria-de-edad