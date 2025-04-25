#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

/*
1 caja grande [] = 5 cajas medianas {} = 50 cajas pequeñas ()
1 caja mediana {} = 10 cajas pequeñas ()

76a -> [a]{a}{a}(aaaaaa)
11b -> {b}(b)
*/
string dividirEnCajas(string cantStr, char caja) {
  int cant = stoi(cantStr);
  string ans = "";

  int cajasMedianas = cant / 10;
  cant %= 10;
    
  int cajasGrandes = cajasMedianas / 5;
  cajasMedianas %= 5;
    
  for (int i = 0; i < cajasGrandes; i++) ans += "[" + string(1, caja) + "]";
  for (int i = 0; i < cajasMedianas; i++) ans += "{" + string(1, caja) + "}";
  if (cant > 0) ans += "(" + string(cant, caja) + ")";

  return ans;
}

void solve() {
  string line; cin >> line;
  string ans = "";
  string cantStr = "";
  for (int i = 0; i < line.size(); i++) {
    if (isdigit(line[i])) {
      cantStr += line[i];
    } else {
      ans += dividirEnCajas(cantStr, line[i]);
      cantStr = "";
    }
  }
  cout << ans << endl;
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