#include <iostream>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int a, b; cin >> a >> b;
  for (int i = a; i <= b; i++) {
    if (i == 1) cout << "one" << endl;
    if (i == 2) cout << "two" << endl;
    if (i == 3) cout << "three" << endl;
    if (i == 4) cout << "four" << endl;
    if (i == 5) cout << "five" << endl;
    if (i == 6) cout << "six" << endl;
    if (i == 7) cout << "seven" << endl;
    if (i == 8) cout << "eight" << endl;
    if (i == 9) cout << "nine" << endl;
    if (i > 9 && (i & 1) == 0) cout << "even" << endl;
    if (i > 9 && (i & 1) != 0) cout << "odd" << endl;
  }

  return 0;
}

// https://www.hackerrank.com/challenges/c-tutorial-for-loop/problem?isFullScreen=true