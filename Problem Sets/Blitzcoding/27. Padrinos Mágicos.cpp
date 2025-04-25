#include <bits/stdc++.h>

using namespace std;

void solve() {
  string operacion;
  getline(cin, operacion);
  stringstream ss(operacion);

  int ans, target;
  string elemento, operador;
  bool primero = true;
  while (ss >> elemento) {
    if (primero) {
      primero = false;
      ans = stoi(elemento);
      continue;
    }

    if (elemento == "+" || elemento == "-" || elemento == "*" || elemento == "/") operador = elemento;
    else {
      target = stoi(elemento);
      if (operador == "+") ans += target;
      else if (operador == "-") ans -= target;
      else if (operador == "*") ans *= target;
      else if (operador == "/") ans /= target;
    }
  }
  cout << ans << "\n";
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  cin.ignore();
  while (t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/27