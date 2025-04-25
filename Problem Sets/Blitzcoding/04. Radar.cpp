#include <bits/stdc++.h>

using namespace std;

void solve() {
  string lista, num; getline(cin, lista);
  stringstream ss(lista.substr(1, lista.size()-2));
  int suma = 0;
  while(getline(ss, num, ',')) {
    if ((stoi(num) & 1) == 0) {
      suma += stoi(num);
    }
  }
  cout << suma << endl;
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

// https://blitzcoding.com/problem-detail/4