#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

int valorar(string x) {
  map<char, int> talla = {{'S', -1}, {'M', 0}, {'L', 1}};
  int valor = talla[x[x.size()-1]];
  int xs = x.size()-1;
  valor += valor * xs;
  return valor;
}

void solve() {
  string a, b; cin >> a >> b;
  if (valorar(a) < valorar(b)) {
    cout << "<\n";
  } else if (valorar(a) == valorar(b)) {
    cout << "=\n";
  } else {
    cout << ">\n";
  }
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

// https://codeforces.com/contest/1741/problem/A