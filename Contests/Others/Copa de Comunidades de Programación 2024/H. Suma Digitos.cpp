#include <bits/stdc++.h>

using namespace std;

void solve() {
  string s; cin >> s;
  if (s[0] == '-' || s.size() >= 6) { cout << 0 << endl; return; }
  int suma = 0;
  for (int i = 0; i < s.size(); i++) {
    suma += s[i] - '0';
  }
  cout << suma << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  //cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}