#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

// R es un radio
long long cantPuntos(long long R) {
  long long suma = 1;
  long long pot = 2;
  for (long long i=1; i <= R; i++) {
    suma += (1 << pot);
    pot++;
  }
  return suma;
}

void solve() {
  long long n; cin >> n;
  vector<int> precalc;
  long long R = 30;
  for (int i=0; i<R; i++) precalc.push_back(cantPuntos(i));
  //dbg(precalc);
  int pos = lower_bound(precalc.begin(), precalc.end(), n) - precalc.begin();
  cout << pos;
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

// http://codeforces.com/gym/104426/problem/L