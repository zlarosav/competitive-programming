#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

const double PI = 3.141592653589793;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  double x, y, z; cin >> x >> y >> z;
  double x_plus_PI = x + PI;
  double y_plus_PI = y + PI;
  cout << fixed << setprecision(6) << (x+x*(y+pow(z, 2)))/(x_plus_PI*y_plus_PI);

  return 0;
}

// https://omegaup.com/arena/UNJFSC2024/practice/#problems/Programando-formulas