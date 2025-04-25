#include <bits/stdc++.h>

using namespace std;

void solve() {
  vector<string> regalos, posibles;
  string lista, materiales, regalo; getline(cin, lista);
  stringstream ss(lista.substr(1, lista.size()-2));
  while(getline(ss, regalo, ',')) {
    if (regalo[0] == ' ') {
      regalos.push_back(regalo.substr(2, regalo.size()-3));
    } else {
      regalos.push_back(regalo.substr(1, regalo.size()-2));
    }
  }

  cin >> materiales;
  cin.ignore();

  for (string regalo : regalos) {
    int r = 0, m = 0; // regalo, material
    while (r < regalo.size() && m < materiales.size()) {
      if (regalo[r] == materiales[m]) {
        r++; m = 0;
      }
      m++;

      if (r != regalo.size() && m == materiales.size()) break;
      if (r == regalo.size()) {
        posibles.push_back(regalo);
        break;
      }
    }
  }
  
  cout << "[";
  for (int i = 0; i < posibles.size(); ++i) {
    if (i > 0) cout << ", ";
    cout << "'" << posibles[i] << "'";
  }
  cout << "]" << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  cin.ignore();
  while(t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/3