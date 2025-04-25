#include <bits/stdc++.h>

#ifdef LOCAL
#include "../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
  int Y, W; cin >> Y >> W;
  int numerador = 6 - max(Y, W) + 1;
  int denominador = 6;
  if (numerador % 2 == 0) {
    numerador /= 2;
    denominador /= 2;
  }
  if (numerador % 3 == 0) {
    numerador /= 3;
    denominador /= 3;
  }
  cout << numerador << '/' << denominador;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1;
  // cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}

// https://codeforces.com/contest/9/problem/A