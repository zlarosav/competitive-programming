#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n; cin >> n;
  map<string, vector<int>> medallas;
  while (n--) {
    string pais, tipo; cin >> pais >> tipo;
    if (medallas.count(pais) == 0) medallas[pais] = {0, 0, 0};

    if (tipo == "oro") medallas[pais][0]++;
    else if (tipo == "plata") medallas[pais][1]++;
    else if (tipo == "bronce") medallas[pais][2]++;
  }

  for (auto& med : medallas) {
    cout << med.first << ' ' << med.second[0] << ' ' << med.second[1] << ' ' << med.second[2] << '\n';
  }

  return 0;
}