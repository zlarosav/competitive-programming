#include <iostream>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int num; cin >> num;
  cout << ((num & 1) == 0 ? "Par" : "Impar");

  return 0;
}

// https://omegaup.com/arena/UNJFSC2024/#problems/Par-o-Impar