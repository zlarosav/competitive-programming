#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  double x, y, z; cin >> x >> y >> z;
  cout << fixed << setprecision(6) << (((2*x + y)/z)*(pow(y, 3) - z))/(pow(x, 2)+pow(z, 2)+((x + 2*y + 3*z)/(z - 2*y - 3*x)));

  return 0;
}

// https://omegaup.com/arena/UNJFSC2024/practice/#problems/Evaluando-una-formula-gigante