#include <iostream>
#include <vector>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n; cin >> n;
  vector<int> v1(n);

  for (int i = 0; i < n; i++) {
    cin >> v1[i];
  }

  for (int i = 0; i < n; i++) {
    int value; cin >> value;
    if (value >= v1[i]) {
      cout << 0;
      return 0;
    };
  }

  cout << 1;
  return 0;
}

// https://omegaup.com/arena/UNJFSC2024/practice/#problems/Vector-dominante