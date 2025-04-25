#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> counter;
  for (int i = 0; i < n; i++) {
    int suma = 0;
    string fila; cin >> fila;
    for (int j = 0; j < n; j++) {
      if (fila[j] - '0' == 1) suma++;
    }
    if (suma != 0) counter.push_back(suma);
  }

  if (counter[0] == 2*(counter.size())-1 || counter[counter.size()-1] == 2*(counter.size())-1) {
    cout << "TRIANGLE" << '\n';
  } else {
    cout << "SQUARE" << '\n';
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

// https://codeforces.com/problemset/problem/1926/B