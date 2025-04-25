#include <iostream>
using namespace std;

int sumaDigit(int num) {
  return (num != 0) ? num % 10 + sumaDigit(num / 10) : 0;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int num; cin >> num;
  cout << sumaDigit(num);

  return 0;
}

// https://omegaup.com/arena/UNJFSC2024/practice/#problems/Suma-de-los-digitos