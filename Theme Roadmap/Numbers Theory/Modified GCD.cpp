/*
  Problema de Búsqueda Binaria, Máximo Común Divisor y Divisibilidad (Number Theory, Divisibilidad - GCD)
  https://codeforces.com/problemset/problem/75/C
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

vector<ll> getDivisores(ll N) {
  vector<ll> divisores;
  for (int div = 1; div * div <= N; div++) {
    if (N % div == 0) {
      divisores.push_back(div);
      if (div != N / div) divisores.push_back(N / div);
    }
  }
  return divisores;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  ll a, b; cin >> a >> b;
  int n; cin >> n;

  ll g = gcd(a, b); 
  vector<ll> divisores = getDivisores(g);
  sort(divisores.begin(), divisores.end());
  
  while (n--) {
    ll low, high; cin >> low >> high;

    int idx = lower_bound(divisores.begin(), divisores.end(), high) - divisores.begin();
    ll ans = divisores[idx];
    if (ans != high) ans = divisores[idx-1];

    cout << (low <= ans ? ans : -1) << '\n';
  }

  return 0;
}