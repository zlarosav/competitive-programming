/*
  Problema de Factorización Aritmética (Number Theory - Factorización)
  https://blitzcoding.com/problem-detail/94
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector<pair<ll, ll>> factorizacion(ll N) {
  vector<pair<ll, ll>> factores;
  if (N == 1) {
    factores.push_back({ 1, 1 });
    return factores;
  }

  for (ll p = 2; p * p <= N; p++) {
    if (N % p == 0) {
      int exp = 0;
      while (N % p == 0) {
        exp++;
        N /= p;
      }
      factores.push_back({ p, exp });
    }
  }
  if (N != 1) factores.push_back({ N, 1 });
  
  return factores;
}

int main() {
  int t; cin >> t;
  while (t--) {
    ll N; cin >> N;
    vector<pair<ll, ll>> factores = factorizacion(N);

    for (auto [p, exp] : factores) {
      while (exp--) {
        cout << p << ' ';
      }
    }
    cout << '\n';
  }

  return 0;
}