#include <bits/stdc++.h>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int x, y, z, T; cin >> x >> y >> z >> T;
  if (1.0/x + 1.0/y + 1.0/z > 1.0) {
    cout << "imposible"; 
    return 0;
  }

  int mcm = lcm(lcm(x, y), z);
  cout << (T % mcm != 0 ? mcm - (T % mcm) : 0);

  return 0;
}