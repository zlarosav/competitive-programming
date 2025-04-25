#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

int calcularMagia(int num) {
  int count4 = 0, count7 = 0;
  string s = to_string(num); 
  for (char ch : s) {
    if (ch == '4') count4++;
    if (ch == '7') count7++;
  }
  return abs(count7 - count4);
}

void solve() {
  int a, b; cin >> a >> b;
  int sumaMagia = 0;
  for (int i = a; i <= b; i++) {
    sumaMagia += calcularMagia(i);
  }
  cout << sumaMagia << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}