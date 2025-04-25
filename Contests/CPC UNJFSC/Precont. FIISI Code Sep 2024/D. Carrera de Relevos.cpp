#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> v(n); 
  for (int i=0; i<n; i++) {
    v[i] = i+1;
  }

  int saltos = 1, pos = 0;
  for (int i=1; i<n; i++) {
    cout << v[(pos + saltos) % n] << ' ';
    pos += saltos;
    saltos++;
  }

  cout << endl;
}

int main() {
  int numCasos; cin >> numCasos;
  while (numCasos--) {
    solve();
  }

  return 0;
}