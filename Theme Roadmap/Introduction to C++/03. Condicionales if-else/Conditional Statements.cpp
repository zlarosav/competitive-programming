#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n; cin >> n;
  if (n == 1) cout << "one" << endl;
  if (n == 2) cout << "two" << endl;
  if (n == 3) cout << "three" << endl;
  if (n == 4) cout << "four" << endl;
  if (n == 5) cout << "five" << endl;
  if (n == 6) cout << "six" << endl;
  if (n == 7) cout << "seven" << endl;
  if (n == 8) cout << "eight" << endl;
  if (n == 9) cout << "nine" << endl;
  if (n > 9) cout << "Greater than 9" << endl;

  return 0;
}

// https://www.hackerrank.com/challenges/c-tutorial-conditional-if-else/problem?isFullScreen=true