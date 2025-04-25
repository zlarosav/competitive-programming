#include <iostream>
#include <map>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  map<int, int> m;

  for (int i = 0; i < 4; i++) {
    int value; cin >> value; m[value]++;
  }

  for (pair<const int, int> it : m) {
    if (it.second >= 3) {
      cout << 1;
      return 0;
    }
  }

  cout << 0;
  return 0;
}

// https://omegaup.com/arena/UNJFSC2024/practice/#problems/Triangulo-equilatero