#include <bits/stdc++.h>

using namespace std;

void solve() {
  string dividendo; int divisor;
  cin >> dividendo >> divisor;
  int resto = 0;
  for (char ch : dividendo) {
    resto = (resto * 10 + (ch - '0')) % divisor;
  }
  cout << resto << endl;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/62