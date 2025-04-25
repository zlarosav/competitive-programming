#include <bits/stdc++.h>

using namespace std;

void solve() {
  string number; cin >> number;
  int suma = 0;
  for (char ch : number) {
    suma += ch - '0';
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

// https://blitzcoding.com/problem-detail/6