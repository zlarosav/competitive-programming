/*
  Problema de conocimiento en Promedio Aritmético (Math)
  https://codeforces.com/contest/2078/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while (t--) {
    int n, x; cin >> n >> x;
    int suma = 0;
    for (int i = 0; i < n; i++) {
      int a; cin >> a;
      suma += a;
    }
    cout << (suma == x * n ? "YES\n" : "NO\n");
  }

  return 0;
}