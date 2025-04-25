#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n; cin >> n;
  vector<int> v(n);
  for (int& i : v) cin >> i;
  int suma = 0;
  for (int i = 0; i < n; i++) {
    if (i % 2 == 0) suma += v[i];
    else suma -= v[i];
  }
  cout << suma << '\n';
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

// https://codeforces.com/contest/2010/problem/A