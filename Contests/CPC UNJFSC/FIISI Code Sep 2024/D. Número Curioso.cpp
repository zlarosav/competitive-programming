#include <bits/stdc++.h>

using namespace std;

void solve() {
  int numero; cin >> numero; numero++;

  while (true) {
    string num = to_string(numero);
    set<char> digitos;
    bool esCurioso = true;

    for (int i=0; i<num.size(); i++) {
      if (digitos.count(num[i]) > 0) {
        esCurioso = false;
        break;
      }
      digitos.insert(num[i]);
    }

    if (esCurioso) {
      cout << num << endl;
      return;
    }

    numero++;
  }
}

int main() {
  int numCasos; cin >> numCasos;
  while (numCasos--) {
    solve();
  }

  return 0;
}