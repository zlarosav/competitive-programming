#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;
using ll = long long;

void solve() {
  string pre; cin >> pre;
  int n = pre.size();

  // guiones no al comienzo ni al final
  if (pre.front() == '-' || pre.back() == '-') {
    cout << "invalid\n";
    return;
  }

  /* REGLAS
  - no más de 3 guiones
  - si hay 3 guiones, uno separa el checsum

  - checksum
  - 10*d1 + 9*d2 + ... + 2*d9 + 1*checksum = mult de 11
  */
  bool invalid = false;
  int guiones = 0, cntDigitos = 0;
  for (int i = 0; i < n; i++) {
    // guiones no consecut
    if (pre[i] == '-') {
      guiones++;
      if (i < n - 1 && pre[i+1] == '-') invalid = true;
    } else {
      cntDigitos++;
      // el X solo debe estar al final
      if (pre[i] == 'X' && i != n-1) invalid = true;
    }
    
    if (invalid) {
      cout << "invalid\n";
      return;
    }
  }

  if (cntDigitos != 10 || guiones > 3 || (guiones == 3 && pre[n-2] != '-')) {
    cout << "invalid\n";
    return;
  }

  int s = 0, curr = 10;
  for (char ch : pre) {
    if (ch == '-') continue;
    int x = (ch == 'X' ? 10 : ch - '0');
    s += curr * x;
    curr--;
  }
  if (s % 11 != 0) {
    cout << "invalid\n";
    return;
  } 

  string nuevo = "978-" + pre.substr(0, n-1);
  int newS = 0, newCurr = 1;
  for (char ch : nuevo) {
    if (ch == '-') continue;
    newS += newCurr * (ch - '0');
    newCurr = 4 - newCurr;
  }
  int checkSum = (10 - (newS % 10)) % 10;
  cout << nuevo << checkSum << '\n';
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